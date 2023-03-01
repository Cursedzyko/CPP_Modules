/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 15:03:49 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/01 13:00:26 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	{
		std::cout << "**************SCAVTRAP********************\n";
		ScavTrap a("Clapper");
		std::cout << "************Constructor***********\n";
		std::cout << "Attributes:\n";
		std::cout << "Name: " << a.getName() << "\n";
		std::cout << "Health: " << a.getHitPoint() << "\n";
		std::cout << "Energy: " << a.getEnergyPoint() << "\n";
		std::cout << "Damage: " << a.getAttackDamage() << "\n";
		std::cout << "************Member funsctions***********\n";
		a.setAttackDamage(4);
		ScavTrap b("Bot");
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
	}
	{
		std::cout << "**************FRAGTRAP********************\n";
		FragTrap a("Clapper_01");
		std::cout << "************Constructor***********\n";
		std::cout << "Attributes:\n";
		std::cout << "Name: " << a.getName() << "\n";
		std::cout << "Health: " << a.getHitPoint() << "\n";
		std::cout << "Energy: " << a.getEnergyPoint() << "\n";
		std::cout << "Damage: " << a.getAttackDamage() << "\n";
		std::cout << "************Member funsctions***********\n";
		a.setAttackDamage(10);
		FragTrap b("Bot");
		a.attack("Bot");
		b.takeDamage(10);
		std::cout << "Health of Clapper after attack: " << a.getHitPoint() << "\n";
		std::cout << "Health of Bot after attack: " << b.getHitPoint() << "\n";
		b.setEnergyPoint(0);
		b.setHitPoint(1);
		b.beRepaired(20);
		b.setEnergyPoint(2);
		b.beRepaired(20);
		std::cout << "Health of Bot after repairing " << b.getHitPoint() << "\n";
		a.highFivesGuys();
	}
	return (0);
}
