/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 06:40:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/04/07 07:24:30 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print(int &x)
{
	std::cout << x << std::endl;
}

void sqr(int &x)
{
	x *= x;
}

int main( void ) {
	int arr[] = {2, 3, 4, 1};

	::iter(arr, 4, print);
	

	std::cout << "++++++++++++++2+++++++++++++++++++\n";
	::iter(arr, 4, sqr);
	for (int i = 0; i < 4; i++)
		std::cout << arr[i] << std::endl;
	return 0;
}