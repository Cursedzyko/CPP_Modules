/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 14:55:25 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/03 13:06:32 by zyunusov         ###   ########.fr       */
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

unsigned int Span::longestSpan()
{
	try{
		if (this->_nb <= 1)
			throw NoSpan();
		unsigned int max = *std::max_element(this->_vec.begin(), this->_vec.end());
		return (max);
	}
	catch(std::exception &e)
	{
		std::cerr << e.what();
		return (0);
	}
	
}

unsigned int Span::shortestSpan()
{
	unsigned int min;
	try{
		if (this->_nb <= 1)
			throw NoSpan();
		min = *std::min_element(this->_vec.begin(), this->_vec.end());
		return (min);
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

