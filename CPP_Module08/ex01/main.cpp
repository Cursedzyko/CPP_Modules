/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 06:40:21 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/03 13:13:48 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main(void)
{
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