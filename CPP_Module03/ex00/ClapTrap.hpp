/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 15:37:12 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/27 17:46:53 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap 
{
private:
	std::string _name;
	int _hitPoint;
	int _energyPoint;
	int _attackDamage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& src);
	ClapTrap &operator=(const ClapTrap& src);
	~ClapTrap();

	void setName(std::string name);
	void setHitPoint(int hitPoint);
	void setEnergyPoint(int energyPoint);
	void setAttackDamage(int attackDamage);

	std::string getName(void) const;
	int getHitPoint(void) const;
	int getEnergyPoint(void) const;
	int getAttackDamage(void) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};




#endif