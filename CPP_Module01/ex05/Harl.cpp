/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 13:40:10 by zyunusov          #+#    #+#             */
/*   Updated: 2023/02/13 15:45:57 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl created" << std::endl;
}
Harl::~Harl(void)
{
	std::cout << "Harl destroyed" << std::endl;
}

void Harl::debug(void)
{
	std::cout << "[DEBUG]  ";
	std::cout << "I love having extra bacon for" \
	<< "my 7XL-double-cheese-triple-pickle-specialketchup burger." \
	<< " I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "[INFO]  ";
	std::cout << "I cannot believe adding extra bacon costs more money. " \
	<< "You didn’t put  enough bacon in my burger! " \
	<< "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "[WARNING]  ";
	std::cout <<"I think I deserve to have some extra bacon for free. " \
	<< "I’ve been coming for years whereas you started " \
	<< "working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "[ERROR]  ";
	std::cout << "This is unacceptable! I want to " \
	<< "speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void	(Harl::*funcPtr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == str[i])
		{
			(this->*funcPtr[i])();
			break ;
		}
	}
}
