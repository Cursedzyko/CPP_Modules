/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 15:31:29 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/06 15:02:30 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base* generate(void)
{
	srand(time(NULL));
	switch (rand() % 3)
	{
		case 0:
			std::cout << "Class A generated\n";
			return (new A);
		case 1:
			std::cout << "Class B generated\n";
			return (new B);
		case 2:
			std::cout << "Class C generated\n";
			return (new C);
		default:
			return (NULL);
	}
}

void identify(Base* p)
{
	if (dynamic_cast<A *> (p))
		std::cout << "the actual type pointed to is: A\n";
	else if (dynamic_cast<B *> (p))
		std::cout << "the actual type pointed to is: B\n";
	else
		std::cout << "the actual type pointed to is: C\n";
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A &> (p);
		std::cout << "the actual type pointed to is: A\n";
	}
	catch(std::exception &e){}
	try
	{
		dynamic_cast<B &> (p);
		std::cout << "the actual type pointed to is: B\n";
	}
	catch(std::exception &e){}
	try
	{
		dynamic_cast<C &> (p);
		std::cout << "the actual type pointed to is: C\n";
	}
	catch(std::exception &e){}
}