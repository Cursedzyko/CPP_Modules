/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:16:06 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/19 17:42:18 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->amount = 0;
}
PhoneBook::~PhoneBook(void)
{
}

void	PhoneBook::Display(void)
{
	std::cout << "Enter commands[ADD, SEARCH, EXIT]: ";
}


void	PhoneBook::Add(void)
{
	if (this->amount == 8)
	{
		std::string ans;
		std::cout << "List is full!\n";
		// std::cout << "Do you want to change contact?(yes,no)\n";
		// getline(std::cin, ans);
		// if (ans == "no")
		// 	std::cout << "Nothing changed\n";
		// else if (ans == "yes")
		// 	this->contacts[7].set_info(7);
			
	}	
	else if (this->contacts[this->amount].set_info(this->amount + 1))
		this->amount++;
}

void PhoneBook::DisplayHead(void)
{
	std::cout << "|==========================================|\n";
	std::cout << "| Index | First Name | Last Name | Nickname|\n";
	std::cout << "|==========================================|\n";
	for (int i = 0; i < this->amount; i++)
		this->contacts[i].DisplayHeader();
	std::cout << "|==========================================|\n";
}


void	PhoneBook::Search()
{
	int i;
	if (this->amount == 0)
		std::cout << "Add a contact before!\n";
	else
	{
		this->DisplayHead();
	}
}

//https://www.geeksforgeeks.org/cpp-program-to-show-use-of-this-keyword-in-class/