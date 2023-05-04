/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 06:40:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/01 13:18:37 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> v;
	for (int i = 0; i < 5; i++)
		v.push_back(i + 1);
	std::cout << "Created vector\n";
	for (int i = 0; i < 5; i++)
		std::cout << v[i] << " ";
	std::cout << "\n\n";
    try {
        std::cout << "Value found at index " << easyfind(v, 3) - v.begin() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what();
    }
	try {
        std::cout << "Value found at index " << easyfind(v, 5) - v.begin() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what();
    }
    try {
        std::cout << "Value found at index " << easyfind(v, 6) - v.begin() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what();
    }
	try {
        std::cout << "Value found at index " << easyfind(v, -1) - v.begin() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << e.what();
    }
    return 0;
}