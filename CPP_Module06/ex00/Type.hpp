/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Type.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 14:58:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/31 17:06:07 by zyunusov         ###   ########.fr       */
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



long int charToInt(std::string s);
char	intToChar(int num);
#endif