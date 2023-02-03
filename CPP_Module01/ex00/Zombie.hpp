/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 15:55:08 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/01 17:23:05 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>


class Zombie{
private:
	std::string	name;
public:
	Zombie(std::string name);
	~Zombie(void);
	void	announce(void);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif