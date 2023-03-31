/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:46:06 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/31 17:06:28 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

long int charToInt(std::string s)
{
	long int n = std::strtol(s.c_str(), NULL, 10);
	return (n);
}

char	intToChar(int num)
{
	char	ch = static_cast<char>(num);
	return (ch);
}

int isChar(std::string s)
{
	if (s.length() == 1)
	{
		if (isdigit(s[0]))
			return (0);
		return (1);
	}
	return (0);
}

int isInt(std::string s)
{
	if (s.length() > 1)
	{
		for (int i = 0; i < (int) s.length(); i++)
		{
			if (s[0] == '-' || s[0] == '+')
				continue ;
			else if (!isdigit(s[i]))
				return (0);
		}
	}
	try
	{
		int num = std::atoi(s.c_str());
		(void) num;
	}
	catch (std::exception & exc)
	{
		return (0);
	}
	return (1);
}

int type(std::string s)
{
	if (isChar(s))
		return (1);
	if (isInt(s))
		return (2);
	// if (isFloat(s))
	// 	return (3);
	// if (isDouble(s))
	// 	return (4);
	return (0);
}