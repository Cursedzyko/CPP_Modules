/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:03:49 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/28 15:05:45 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {
	
	ScavTrap a("Clapper");
	std::cout << "************Constructor***********\n";
	std::cout << "Attributes:\n";
	std::cout << "Name: " << a.getName() << "\n";
	std::cout << "Health: " << a.getHitPoint() << "\n";
	std::cout << "Energy: " << a.getEnergyPoint() << "\n";
	std::cout << "Damage: " << a.getAttackDamage() << "\n";
	std::cout << "************Member funsctions***********\n";
	a.setAttackDamage(4);
	ClapTrap b("Bot");
	a.attack("Bot");
	b.takeDamage(4);
	std::cout << "Health of Clapper after attack: " << a.getHitPoint() << "\n";
	std::cout << "Health of Bot after attack: " << b.getHitPoint() << "\n";
	b.setEnergyPoint(0);
	b.setHitPoint(2);
	b.beRepaired(15);
	b.setEnergyPoint(10);
	b.beRepaired(15);
	a.guardGate();
	std::cout << "Health of Bot after repairing " << b.getHitPoint() << "\n";

	return (0);
}
