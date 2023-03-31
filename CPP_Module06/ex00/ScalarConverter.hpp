/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 13:45:52 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/31 16:23:41 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <sstream>
#include <bits/stdc++.h>

#include "Type.hpp"


class ScalarConverter
{	
private:
	ScalarConverter();
	~ScalarConverter();
public:
	static void convert(std::string literal);
};

#endif