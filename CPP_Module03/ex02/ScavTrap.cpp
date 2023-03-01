/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:12:33 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/28 15:07:47 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap def. constructor called\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap constructor called\n";
}

void ScavTrap::guardGate()
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " already dead\n";
	else if (this->_energyPoint <= 0)
		std::cout << this->_name << " doesn't have energy to attack" << std::endl;
	else
		std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode \n";
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called\n";
}