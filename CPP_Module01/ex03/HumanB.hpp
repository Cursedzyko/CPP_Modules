/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:38:56 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/09 15:44:45 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
#include "Weapon.hpp"

class HumanB{
private:
	std::string _name;
	Weapon *_weapon;
public:
	HumanB(std::string name);
	~HumanB();
	
	void attack();
	void setWeapon(Weapon &weapon);
};


#endif