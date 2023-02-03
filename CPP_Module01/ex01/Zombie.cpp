/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 13:06:12 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/03 13:19:24 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << ": " << "Created" << std::endl;
}

Zombie::Zombie(void)
{
	this->name = "Zero";
	std::cout << "Zombie object " << this->name << " created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": " << "Destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": " <<" BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}