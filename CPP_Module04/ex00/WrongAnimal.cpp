/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:31:16 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/03 14:33:11 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->_type = "";
	std::cout << BLUE << "WrongAnimal constructor called\n" << NORMAL;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << BLUE <<"WrongAnimal destructor called\n" << NORMAL;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src)
{
	this->_type = src._type;
	std::cout << BLUE << "WrongAnimal copy constructor called\n" << NORMAL;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	this->_type = src._type;
	std::cout << BLUE << "WrongAnimal copy assignment operator called\n" << NORMAL;
	return (*this);
}

const std::string WrongAnimal::getType(void) const
{
	return (this->_type);
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << BLUE << "WrongAnimal can't make a sound\n" << NORMAL;
}