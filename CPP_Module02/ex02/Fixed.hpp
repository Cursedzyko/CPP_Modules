/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:32:30 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/27 15:32:13 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int _value;
	static const int _fracBits;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& copy);
	Fixed &operator = (const Fixed& src);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed operator*(Fixed const &n2);
	Fixed operator+(Fixed const &n2);
	Fixed operator-(Fixed const &n2);
	Fixed operator/(Fixed const &n2);
	Fixed& operator++();
	Fixed& operator--();
	Fixed& operator++(int);
	Fixed& operator--(int);
	bool operator>(Fixed const &n2);
	bool operator<(Fixed const &n2);
	bool operator>=(Fixed const &n2);
	bool operator<=(Fixed const &n2);
	bool operator==(Fixed const &n2);
	bool operator!=(Fixed const &n2);

	static const Fixed& min(Fixed const &n1, Fixed const &n2);
	static const Fixed& max(Fixed const &n1, Fixed const &n2);
	static Fixed& min(Fixed& n1, Fixed& n2);
	static Fixed& max(Fixed& n1, Fixed& n2);
};

std::ostream	&operator<<(std::ostream &s, Fixed const &num);

#endif