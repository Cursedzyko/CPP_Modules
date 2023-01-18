/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:57:50 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/18 16:45:20 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string.h>

int main(int argc, char **argv)
{
	std::locale loc;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		for(int i = 1; i < argc; i++)
		{
			for (size_t j = 0; j < strlen(argv[i]); j++)
			{
				std::cout << (char)std::toupper(argv[i][j]);
			}
			std::cout << std::endl;
		}
	}
	return (0);
}