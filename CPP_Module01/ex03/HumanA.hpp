/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 15:27:00 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/09 15:47:19 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
#include "Weapon.hpp"

class HumanA{
private:
	std::string _name;
	Weapon &_weapon;
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();

	void attack();
	void setWeapon(Weapon weapon);
};


#endif