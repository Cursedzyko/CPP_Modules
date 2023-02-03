/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:57:42 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/03 13:18:11 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	int	size;
	
	size = 12;
	Zombie *horde = zombieHorde(size, "Frank");
	for (int i = 0; i < size; i++)
		horde[i].announce();
	delete [] horde;
}
