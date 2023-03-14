/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:00:13 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/14 15:13:26 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void): _name("???")
{
	for (int i = 0; i < 4; i++)
		this-> _in[i] = NULL;
	std::cout << "Character default constructor called\n";
}

Character::Character(std::string name): _name(name)
{
	for (int i = 0; i < 4; i++)
		this-> _in[i] = NULL;
	std::cout << "Character constructor called\n";
}

Character::Character(const Character& src)
{
	*this = src;
	std::cout << "Character copy constructor called\n";
}

Character& Character::operator=(const Character& src)
{
	for (int i = 0; i < 4; i++)
		this->_in[i] = src._in[i];
	this->_name = src._name;
	std::cout << "Character Copy assignment operator called\n";
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (this->_in[i] == NULL)
		{
			this->_in[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_in[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	this->_in[idx]->use(target);
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
		delete this->_in[i];
	std::cout << "Character destructor called\n";
}