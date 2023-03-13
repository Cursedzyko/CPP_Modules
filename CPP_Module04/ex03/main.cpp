/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:23:47 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/13 14:36:10 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

int main()
{
	AMateria a("Cube");
	AMateria b;
	AMateria c;

	b.setType("People");
	c = b;
		
	std::cout << a.getType() << "\n";
	std::cout << b.getType() << "\n";
	std::cout << c.getType() << "\n";
	return (0);
}