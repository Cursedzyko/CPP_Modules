/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 06:40:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/06 12:13:22 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}
	{
		std::cout << "+++++++++++++++Test2+++++++++++++++++\n";
		Span s = Span(9);
		for(int i = 0; i < 5; i++)
		{
			s.addNumber(i + 1);
		}
		std::cout << "Span created: ";
		s.print();
		std::vector<unsigned int> v;
		for(int i = 5; i < 10; i++)
		{
			v.push_back(i + 1);
		}
		std::cout << "Span after adding range: ";
		s.addRange(v.begin(), v.end());
		s.print();
		std::cout << "Shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "Longest span: " << s.longestSpan() << std::endl;
	}
	
}