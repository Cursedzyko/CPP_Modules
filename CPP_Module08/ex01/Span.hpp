/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:51:44 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/03 13:05:25 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
private:
	unsigned int _nb;
	unsigned int _size;
	std::vector<int> _vec;

	class FillEx : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("Already Full!!!\n");
			}
	};

	class NoSpan : public std::exception
	{
		public:
			const char* what() const throw()
			{
				return ("No Span found!!!\n");
			}
	};
public:
	Span();
	Span(unsigned int nb);
	Span(const Span &src);
	Span & operator=(const Span & src);
	~Span();

	void addNumber(unsigned int nb);
	unsigned int longestSpan();
	unsigned int shortestSpan();
	void addRange(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end);
	void print();
};




#endif 