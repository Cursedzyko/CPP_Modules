/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 16:02:34 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/01 16:44:04 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.h"

Zombie::Zombie(std::string name)
{
	this->name = name;
	std:: this->name << ": " << "Created" << std::endl;
}

Zombie::~Zombie(void)
{
	std:: this->name << ": " << "Destroyed" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": " <<" BraiiiiiiinnnzzzZ..." << std::endl;
}