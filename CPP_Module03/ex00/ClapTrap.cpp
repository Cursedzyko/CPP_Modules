/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:37:10 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/28 15:33:40 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_hitPoint = 10;
	this->_energyPoint = 10;
	this->_attackDamage = 0;
	this->_name = name;
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_name  = src.getName();
	this->_hitPoint = src.getHitPoint();
	this->_energyPoint = src.getEnergyPoint();
	this->_attackDamage = src.getAttackDamage();
	return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoint(int hitPoint)
{
	this->_hitPoint = hitPoint;
}
void ClapTrap::setEnergyPoint(int energyPoint)
{
	this->_energyPoint = energyPoint;
}

void ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoint(void) const
{
	return (this->_hitPoint);
}

int ClapTrap::getEnergyPoint(void) const
{
	return (this->_energyPoint);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " dead already" << std::endl;
	else if (this->_energyPoint <= 0)
		std::cout << this->_name << " doesn't have energy to attack" << std::endl;
	else if (this->_hitPoint > 0)
	{
		std::cout << this->_name << " attacked " << target;
		std::cout << ". This  attack dealt " << this->_attackDamage << "damage" << std::endl;
		this->_energyPoint -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " dead already" << std::endl;
	else if (this->_hitPoint - amount <= 0)
	{
		std::cout << "Took critical damage and dead!\n";
		this->_hitPoint = 0;
	}
	else if (this->_hitPoint - amount > 0)
	{
		std::cout << amount << " taken damage\n";
		this->_hitPoint -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " dead already" << std::endl;
	else if (this->_energyPoint <= 0)
		std::cout << "Don't have energy to repair\n";
	else
	{
		std::cout << amount << " of health repaired and ready to clap or get clapped!\n";
		this->_energyPoint -= 1;
		this->_hitPoint += amount;
	}
}
