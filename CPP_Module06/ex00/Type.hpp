/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:58:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/03 15:15:44 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPE_HPP
# define TYPE_HPP

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <string>

int type(std::string s);
int isChar(std::string s);
int isInt(std::string s);
int isFloat(std::string s);



long int strToInt(std::string s);
char	intToChar(int num);
float	strToFloat(std::string s);
char	floatToChar(float num);
char	doubleToChar(double num);
double strToDouble(std::string s);
char strToCh(std::string s);
int charToInt(char c);
float	charToFloat(char c);
int floatToInt(float n);
double floatToDouble(float n);
double	charToDouble(char c);
double	intToDouble(int num);
#endif