/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:38:19 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/27 15:32:08 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fracBits = 8;

Fixed::Fixed(void): _value(0)
{
}

Fixed::Fixed(const int value): _value(value << this->_fracBits)
{
}

Fixed::Fixed(const float value): _value(roundf(value * (1 << this->_fracBits)))
{
}
Fixed::~Fixed(void)
{
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed	&Fixed::operator= (const Fixed& src)
{
	this->_value = src.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (float)(1 << this->_fracBits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_fracBits);
}

std::ostream	&operator<<(std::ostream &s, Fixed const &num)
{
	return (s << num.toFloat());
}


bool Fixed::operator>(Fixed const &n2)
{
	if (this->getRawBits() > n2.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const &n2)
{
	if (this->getRawBits() < n2.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const &n2)
{
	if (this->getRawBits() >= n2.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const &n2)
{
	if (this->getRawBits() <= n2.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const &n2)
{
	if (this->getRawBits() == n2.getRawBits())
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const &n2)
{
	if (this->getRawBits() != n2.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator*(Fixed const &n2)
{
	Fixed res(this->toFloat() * n2.toFloat());
	return (res);
}

Fixed Fixed::operator-(Fixed const &n2)
{
	Fixed res(this->toFloat() - n2.toFloat());
	return (res);
}

Fixed Fixed::operator+(Fixed const &n2)
{
	Fixed res(this->toFloat() + n2.toFloat());
	return (res);
}

Fixed Fixed::operator/(Fixed const &n2)
{
	Fixed res(this->toFloat() / n2.toFloat());
	return (res);
}

Fixed& Fixed::operator++( void )
{
	this->_value++;
	return (*this);
}

Fixed& Fixed::operator++(int)
{
	Fixed& res(*this);
	this->_value++;
	return (res);
}

Fixed& Fixed::operator--(void)
{
	this->_value--;
	return(*this);
}

Fixed& Fixed::operator--(int)
{
	Fixed& res(*this);
	this->_value--;
	return (res);
}

const Fixed& Fixed::min(Fixed const &n1, Fixed const &n2)
{
	if (Fixed(n1) > Fixed(n2))
		return (n2);
	return (n1);
}

const Fixed& Fixed::max(Fixed const &n1, Fixed const &n2)
{
	if (Fixed(n1) > Fixed(n2))
		return (n1);
	return (n2);
}

Fixed& Fixed::min(Fixed& n1, Fixed& n2)
{
	if (Fixed(n1) > Fixed(n2))
		return (n2);
	return (n1);
}

Fixed& Fixed::max(Fixed& n1, Fixed& n2)
{
	if (Fixed(n1) > Fixed(n2))
		return (n1);
	return (n2);
}