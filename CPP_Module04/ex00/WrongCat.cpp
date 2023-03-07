/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:35:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/03 14:35:32 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << MAGENTA <<"WrongCat constructor called\n" << NORMAL;
}

WrongCat::~WrongCat(void)
{
	std::cout << MAGENTA <<"WrongCat destructor called\n" << NORMAL;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
	this->_type = src._type;
	std::cout << MAGENTA <<"WrongCat copy assignment operator called\n" << NORMAL;
	return (*this);
}

WrongCat::WrongCat(const WrongCat& src): WrongAnimal(src)
{
	std::cout << MAGENTA <<"WrongCat copy constructor called\n" << NORMAL;
}

void WrongCat::makeSound(void) const
{
	std::cout << MAGENTA << "WRONGCAT MEEEEEOOOOOOW!!!\n" << NORMAL; 
}