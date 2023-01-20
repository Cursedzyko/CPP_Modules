/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 12:57:37 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/20 16:26:53 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	std::string cmd;
	PhoneBook	PhoneBook;
	
	PhoneBook.Display();
	while (1)
	{
		std::cout << "> ";
		getline(std::cin, cmd);
		if (std::cin.eof())
			break ;
		if (cmd == "ADD")
			PhoneBook.Add();
		else if (cmd == "SEARCH")
			PhoneBook.Search();
		else if (cmd == "EXIT")
		{
			std::cout << "Bye Bye!\n";
			break ;
		}
		else
			std::cout <<"Command available: ADD, SEARCH, EXIT\n";
	}
	return (0);
}