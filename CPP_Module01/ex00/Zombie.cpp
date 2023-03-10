/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:02:34 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/01 17:23:51 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << ": " << "Created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << ": " << "Destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": " <<" BraiiiiiiinnnzzzZ..." << std::endl;
}