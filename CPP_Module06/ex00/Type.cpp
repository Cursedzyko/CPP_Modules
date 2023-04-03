/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:46:06 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/03 15:15:04 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

double floatToDouble(float n)
{
	double num = static_cast<double>(n);
	return (num);
}

long int strToInt(std::string s)
{
	long int n = std::strtol(s.c_str(), NULL, 10);
	return (n);
}

int charToInt(char c)
{
	int num = static_cast<int>(c);
	return (num);
}

char	intToChar(int num)
{
	char	ch = static_cast<char>(num);
	return (ch);
}

char strToCh(std::string s)
{
	char c = s[0];
	return (c);
}

double	charToDouble(char c)
{
	double	num = static_cast<double>(c);
	return (num);
}

float strToFloat(std::string s)
{
	float	num = static_cast<float>(std::strtod(s.c_str(), NULL));
	return (num);
}

double	intToDouble(int num)
{
	double	number = static_cast<double>(num);
	return (number);
}

char	floatToChar(float num)
{
	char	ch = static_cast<char>(num);
	return (ch);
}

float	charToFloat(char c)
{
	float num = static_cast<float>(c);
	return (num);
}

int floatToInt(float n)
{
	int num = static_cast<int>(n);
	return (num);
}

double strToDouble(std::string s)
{
	double	num = static_cast<double>(std::strtod(s.c_str(), NULL));
	return (num);
}

char	doubleToChar(double num)
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
	if (s.length() > 1 && (s[0] == '-' || s[0] == '+' || isdigit(s[0])))
	{
		for (int i = 0; i < (int) s.length(); i++)
		{
			if (!isdigit(s[i]))
				return (0);
		}
	}
	for (int i = 1; i < (int) s.length(); i++)
	{
		if (!isdigit(s[i]))
			return (0);
	}
	return (1);
}

int isFloat(std::string s)
{
	if (s == "+inff" || s == "-inff" || s == "nanf" || s == "inff")
		return (1);
	if (s[s.length() - 1] != 'f')
		return (0);
	if (!isdigit(s[s.length() - 2]))
		return (0);
	if (s.find('.') == std::string::npos)
		return (0);
	if (s.length() > 1 && (s[0] == '-' || s[0] == '+' || isdigit(s[0])))
	{
		for (int i = 1; i < (int) s.length(); i++)
		{
			if (!isdigit(s[i]) && !(s[i] == '.') && !(s[i] == 'f'))
				return (0);
		}
	}
	return (1);
}

int isDouble(std::string s)
{
	if (s == "+inf" || s == "-inf" || s == "nan" || s == "inf")
		return (1);
	if (s.find('.') == std::string::npos)
		return (0);
	if (s.length() > 1 && (s[0] == '-' || s[0] == '+' || isdigit(s[0])))
	{
		for (int i = 1; i < (int) s.length(); i++)
		{
			if (!isdigit(s[i]) && !(s[i] == '.'))
				return (0);
		}
	}
	return (1);
}

int type(std::string s)
{
	if (isChar(s))
		return (1);
	if (isInt(s))
		return (2);
	if (isFloat(s))
		return (3);
	if (isDouble(s))	
		return (4);
	return (0);
}