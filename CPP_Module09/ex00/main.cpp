/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:52:02 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/10 12:35:00 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <cstdlib>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file!!!\n";
		return (1);
	}
	std::string dataBase = "./data.csv";
	BitcoinExchange btc;
	btc.display(dataBase, argv[1]);
	return (0);
}