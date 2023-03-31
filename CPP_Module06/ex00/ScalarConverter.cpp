/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:46:47 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/31 17:20:20 by zyunusov         ###   ########.fr       */
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
			if (charToInt(s) <= INT_MAX && charToInt(s) >= INT_MIN)
				out << "\'" << s << "\'";
			else if (charToInt(s) >= 0 && charToInt(s) <= 255)
				out << "non-displayable";
			else
				out << "impossible";
			break;
		case 0:
			out << "wrong";
			break ;		
	}
	return (out.str());
}

void ScalarConverter::convert(std::string literal)
{
	std::cout << "Char: " << convertToChar(literal) << std::endl;
	// std::cout << "Int: " << convertToInt(literal) << std::endl;
	// std::cout << "Float: " << convertToFloat(literal) << std::endl;
	// std::cout << "Char: " << convertToDouble(literal) << std::endl;
}

