/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:31:54 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/13 16:32:50 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void): AMateria("cure")
{
	std::cout << "Cure constructor called\n";
}

Cure::Cure(const Cure& src): AMateria(src)
{
	std::cout << "Cure copy constructor called\n";
}

Cure& Cure::operator=(const Cure& src)
{
	this->_type = src._type;
	std::cout << "Cure Copy assignment operator called\n";
	return (*this);
}

Cure::Cure(void)
{
	std::cout << "Cure destructor called\n";
}

Cure* Cure::clone() const
{
	return(new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target << "’s wounds * \n";
}