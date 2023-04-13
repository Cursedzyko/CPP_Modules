/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:46:47 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/13 15:57:19 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void)
{
}

ScalarConverter::~ScalarConverter()
{
}

static std::string convertToChar(std::string s)
{
	std::stringstream out;

	switch (type(s))
	{
		case 1:
			out << "\'" << s << "\'";
			break ;
		case 2:
			if (strToInt(s) < -128 || strToInt(s) > 127)
				out << "impossible";
			else if (strToInt(s) > 126 || strToInt(s) < 32)
				out << "non-displayable";
			else
				out << intToChar(strToInt(s));
			break;
		case 3:
			if (strToFloat(s) < -128.0 || strToFloat(s) > 127.0 || std::isnan(strToFloat(s)))
				out << "impossible";
			else if (strToFloat(s) > 126.0 || strToFloat(s) < 32)
				out << "non-displayable";
			else
				out << "\'" << floatToChar(strToFloat(s)) << "\'";
			break ;
		case 4:
			if (strToDouble(s) < -128.0 || strToDouble(s) > 127.0 || std::isnan(strToDouble(s)))
				out << "impossible";
			else if (strToDouble(s) > 126.0 || strToDouble(s) < 32)
				out << "non-displayable";
			else
				out << "\'" << doubleToChar(strToDouble(s)) << "\'";
			break ;
		case 0:
			out << "impossible";
			break ;		
	}
	return (out.str());
}

static std::string convertToInt(std::string s)
{
	std::stringstream out;

	switch(type(s))
	{
		case 1:
			out << charToInt(strToCh(s));
			break ;
		case 0:
			out << "impossible";
			break ;
		default:
			if (s == "inff" || s == "+inff" || s == "nanf" || s == "-inff")
				out << "impossible";
			else if (s == "inf" || s == "+inf" || s == "nan" || s == "-inf")
				out << "impossible";
			else if (strToInt(s) <= INT_MAX && strToInt(s) >= INT_MIN)
				out << strToInt(s);
			else
				out << "impossible";
			break ;
			
	}
	return (out.str());
}

static std::string convertToFloat(std::string s)
{
	std::stringstream out;

	switch(type(s))
	{
		case 1:
			out << std::fixed << std::setprecision(1) << charToFloat(strToCh(s));
			break ;
		case 2:
			out << floatToInt(strToFloat(s)) << ".0f";
			break ;
		case 3:
			if (s == "nanf" || s == "+inff" || s == "-inff" || s == "inff")
				out << s;
			else if (strToFloat(s) <= FLT_MAX && strToFloat(s) >= FLT_MIN)
				out << std::fixed << std::setprecision(1) << strToFloat(s) << 'f';
			else
				out << "impossible";
			break ;
		case 4:
			if (s == "+inf" || s == "-inf" || s == "nan" || s == "inf")
				out << s << 'f';
			else if (strToFloat(s) <= FLT_MAX && strToFloat(s) >= FLT_MIN)
				out << std::fixed << std::setprecision(1) << floatToDouble(strToFloat(s)) << "f";
			else
				out << "impossible";
			break ;
		case 0:
			out << "impossible";
			break ;
	}
	return (out.str());
}

static std::string convertToDouble(std::string s)
{
	std::stringstream out;

	switch(type(s))
	{
		case 1:
			out << std::fixed << std::setprecision(1) << charToDouble(strToCh(s));
			break ;
		case 2:
			out << std::fixed << std::setprecision(1) << intToDouble(strToInt(s));
			break ;
		case 3:
			out << std::fixed << std::setprecision(1) << floatToDouble(strToFloat(s));
			break ;
		case 4:
			out << std::fixed << std::setprecision(1) << strToDouble(s);
			break ;
		case 0:
			out << "impossible";
			break ;
	}
	return (out.str());
}


void ScalarConverter::convert(std::string literal)
{
	std::cout << "Char: " << convertToChar(literal) << std::endl;
	std::cout << "Int: " << convertToInt(literal) << std::endl;
	std::cout << "Float: " << convertToFloat(literal) << std::endl;
	std::cout << "Double: " << convertToDouble(literal) << std::endl;
}

