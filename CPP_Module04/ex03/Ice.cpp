/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 15:40:01 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/13 15:48:05 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void): AMateria("ice")
{
	std::cout << "Ice constructor called\n";
}

Ice::Ice(const Ice& src): AMateria(src)
{
	std::cout << "Ice copy constructor called\n";
}

Ice& Ice::operator=(const Ice& src)
{
	this->_type = src._type;
	std::cout << "Ice Copy assignment operator called\n";
	return (*this);
}

Ice::Ice(void)
{
	std::cout << "Ice destructor called\n";
}

Ice* Ice::clone() const
{
	return(new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target << " *\n";
}