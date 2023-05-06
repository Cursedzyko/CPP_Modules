/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:55:25 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/06 12:11:45 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(): _nb(0), _size(0) {}


Span::Span(unsigned int nb):  _nb(0), _size(nb) {}

Span::Span(const Span &src) { *this = src; }

Span & Span::operator=(const Span & src)
{
	this->_nb = src._nb;
	this->_size = src._size;
	this->_vec = src._vec;
	return (*this);
}

Span::~Span() {}

void Span::addNumber(unsigned int nb)
{
	try{
		if (this->_nb >= this->_size)
			throw Span::FillEx();
		this->_vec.push_back(nb);
		this->_nb += 1;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
	}
}

void Span::addRange(std::vector<unsigned int>::iterator begin, std::vector<unsigned int>::iterator end)
{
	for (std::vector<unsigned int>::iterator it = begin; it != end; it++)
	{
		addNumber(*it);
	}
}

int Span::longestSpan()
{
	try{
		if (this->_nb <= 1)
			throw NoSpan();
		std::vector<int> tmp = this->_vec;
		std::sort(tmp.begin(), tmp.end());
		return (tmp[this->_nb - 1] - tmp[0]);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
		return (0);
	}
	
}

int Span::shortestSpan()
{
	try{
		if (this->_nb <= 1)
			throw NoSpan();
		size_t j = this->_nb - 1;
		std::vector<int> tmp = this->_vec;
		std::sort(tmp.begin(), tmp.end());
		int s = tmp[j] - tmp[0];
		for (size_t i = 0; i < j; i++)
		{
			if (i + 1 <= j)
				s = (s > (tmp[i + 1] - tmp[i])) ? tmp[i + 1] - tmp[i] : s;
			if (j - 1 >= i)
				s = (s > (tmp[j] - tmp[j - 1])) ? tmp[j] - tmp[j - 1] : s;
			j--;
		}
		return (s);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
		return (0);
	}	
}

void Span::print()
{
	for (unsigned int i = 0; i < this->_nb; i++)
	{
		std::cout << this->_vec[i] << " ";
	}
	std::cout << std::endl;
}

