/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 06:40:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/20 14:00:46 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
#include <sys/time.h>
# include <iomanip>

int	main(int argc, char** argv)
{
	struct timeval begin, end;

	if (argc < 2)
	{
		std::cerr << "Invalid args\n";
		return 0;
	}
	PmergeMe r;
	try
	{
		r.initVecData(&argv[1]);
		r.initDeqData(&argv[1]);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 0;
	}
	
	//==================================VECTOR================================

	std::cout << "Before: ";
	r.displayData(0);
	
	gettimeofday(&begin, 0);
	r.mergeSort(0, 0, r.getSize() - 1, 15);
	gettimeofday(&end, 0);

	std::cout << "After: ";
	r.displayData(0);
	
	{
		long seconds = end.tv_sec - begin.tv_sec;
		long microsecs = end.tv_usec - begin.tv_usec;
		double elaps = (seconds + microsecs) * 1e-6;

		std::cout << "Time 	to process a range of " << r.getSize() 
			<< " elements with std::vector : " << std::fixed 
			<< std::setprecision(7) << elaps << " µs" << std::endl;
	}

	//====================================DEQUE===============================

	gettimeofday(&begin, 0);
	r.mergeSort(0, r.getSize() - 1, 15);
	gettimeofday(&end, 0);
	
	{
		long seconds = end.tv_sec - begin.tv_sec;
		long microsecs = end.tv_usec - begin.tv_usec;
		double elaps = (seconds + microsecs) * 1e-6;

		std::cout << "Time 	to process a range of " << r.getSize() 
			<< " elements with std::deque : " << std::fixed 
			<< std::setprecision(7) << elaps << " µs" << std::endl;
	}
	
	return (0);
}