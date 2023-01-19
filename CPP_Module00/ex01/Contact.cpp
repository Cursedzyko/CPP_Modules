/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:51:04 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/19 17:41:40 by zyunusov         ###   ########.fr       */
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

bool Contact::set_info(int in)
{
	this->index = in;
	for (int i = FirstName; i <= Secret; i++)
	{
		std::cout << "● " << Contact::field_names[i] << ":\n+";
		std::getline(std::cin, this->info[i]);
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