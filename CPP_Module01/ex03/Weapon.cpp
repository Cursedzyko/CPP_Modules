/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 14:57:47 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/09 15:51:05 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string& Weapon::getType()
{
	return (this->_type);
}