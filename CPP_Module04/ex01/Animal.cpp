/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:06:44 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/06 15:35:30 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->_type = "";
	std::cout << RED <<"Animal constructor called\n" << NORMAL;
}

Animal::~Animal(void)
{
	std::cout << RED <<"Animal destructor called\n" << NORMAL;
}

Animal::Animal(const Animal& src)
{
	*this = src;
	std::cout << RED << "Animal copy constructor called\n" << NORMAL;
}

Animal& Animal::operator=(const Animal& src)
{
	this->_type = src.getType();
	std::cout << RED << "Animal copy assignment operator called\n" << NORMAL;
	return (*this);
}

const std::string Animal::getType(void) const
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

void Animal::makeSound(void) const
{
	std::cout << RED << "Can't make a sound\n" << NORMAL;
}