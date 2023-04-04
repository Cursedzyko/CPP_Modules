/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:09:30 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/04 14:55:44 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Serializer.hpp"

int main(void)
{
	Data* a = new Data();

	a->c = 'c';
	a->i = 3;
	std::cout << "+++++++++++++Stuct+++++++++++++\n";
	std::cout << "a: " << a->c << std::endl;
	std::cout << "i: " << a->i << std::endl;

	std::cout << "+++++++++++++Serailize+++++++++++++\n";
	
	uintptr_t raw = Serializer::serialize(a);
	std::cout << "c: " << raw << std::endl;
	
	std::cout << "+++++++++++++Deserailize+++++++++++++\n";

	Data *r = Serializer::deserialize(raw);

	std::cout << "c: " << r->c << std::endl;
	std::cout << "i: " << r->i << std::endl;

	delete a;
	return (0);
}