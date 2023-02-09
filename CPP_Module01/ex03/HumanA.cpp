/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:32:02 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/09 15:50:58 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	std::cout << "HumanA " << name << " created with ";
	std::cout << _weapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA " << this->_name << " destroyed" << std::endl;
}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their ";
	std::cout << _weapon.getType() << std::endl;
}

void HumanA::setWeapon(Weapon weapon)
{
	this->_weapon = weapon;
}