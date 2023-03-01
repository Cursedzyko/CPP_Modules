/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/01 12:46:41 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/01 12:54:38 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap Constructor called" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_hitPoint == 0)
		std::cout << this->_name << " already dead\n";
	else if (this->_energyPoint <= 0)
		std::cout << this->_name << " doens't have energy to High FIve\n";
	else
		std::cout << "High FIve request sent\n";
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called\n";
}
