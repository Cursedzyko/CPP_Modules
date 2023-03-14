/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:21:36 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/14 15:11:31 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void): _type("")
{
	std::cout << "AMateria default constructor called\n";
}

AMateria::AMateria(std::string const & type): _type(type)
{
	std::cout << "AMateria constructor called\n";
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called\n";
}

// AMateria& AMateria::operator=(const AMateria& src)
// {
// 	this->_type = src._type;
// 	std::cout << "AMateria Copy assignment operator called\n";
// 	return (*this);
// }

AMateria::AMateria(const AMateria& src)
{
	*this = src;
	std::cout << "AMateria Copy constructor called\n";
}

std::string const& AMateria::getType() const
{
	return (this->_type);
}
