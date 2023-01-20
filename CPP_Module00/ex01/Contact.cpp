/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:51:04 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/20 16:23:25 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::field_names[5] = {
	"FIRST NAME",
	"LAST NAME",
	"NICKNAME",
	"PHONE NUMBER",
	"DARKEST SECRET"
};

Contact::Contact()
{
	for (int i = FirstName; i <= Secret; i++)
		this->info[i] = std::string();
}

Contact::~Contact()
{
}

bool Contact::set_info(int in, int res)
{
	if (!res)
		this->index = in + 1;
	else
		this->index = in;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "● " << Contact::field_names[i] << ":\n+";
		std::getline(std::cin, this->info[i]);
		if (std::cin.eof())
			return (false);
	}
	unsigned long len;
	for (int i = FirstName; i <= Secret; i++)
	{
		len = this->info[i].length();
		if (len == 0)
		{
			std::cout << "This field is empty: " << Contact::field_names[i] << std::endl;
			return (false);
		}
	}
	std::cout << "Contact added!!!\n";
	return (true);
}

void Contact::DisplayHeader(void)
{
	std::cout << "|" << std::setw(10) << this->index;
	for(int i = FirstName; i <= Nickname; i++)
	{
		std::cout << "|";
		if (this->info[i].length() >10)
			std::cout << this->info[i].substr(0, 9) << ".";
		else
			std::cout << std::setw(10) << this->info[i];
	}
	std::cout << "|" << std::endl;
}

void Contact::DisplayCont(void)
{
	std::cout << "Contact [" << this->index << "]\n";
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << Contact::field_names[i] << ": ";
		std::cout << this->info[i] << std::endl;
	}
}