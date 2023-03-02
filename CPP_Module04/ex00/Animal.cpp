/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:06:44 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/02 12:29:18 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

# define RED "\033[31m"

Animal::Animal(void)
{
	this->_type = NULL;
	std::cout << RED <<"Animal constructor called\n" << NORMAL;
}

Animal::~Animal(void)
{
	std::cout << RED <<"Animal destructor called\n" << NORMAL;
}

Animal::Animal(const Animal& src)
{
	this->_type = src._type;
	std::cout << RED << "Animal copy constructor called\n" << NORMAL;
}

Animal& Animal::operator=(const Animal& src)
{
	this->_type = src._type;
	std::cout << RED << "Animal copy assignment operator called\n" << NORMAL;
	return (*this);
}

const std::string Animal::getType(void)
{
	return (this->_type);
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

void makeSound();
{
	if (this->_type == "Dog")
		std::cout << "Wooooof\n";
	else if (this->_type == "Cat")
		std::cout << "Meeeeeow\n";
	else if (this_type == NULL)
		std::cout << "HERE\n";
}