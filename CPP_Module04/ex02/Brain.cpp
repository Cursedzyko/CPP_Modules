/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:04:13 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/06 15:45:39 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = "Nothing in mind";
	std::cout << "Default Brain constructor called\n";
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called\n";
}

Brain& Brain::operator=(const Brain& src)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = src._ideas[i];
	std::cout <<"Brain copy assignment operator called\n";
	return (*this);
}

Brain::Brain(const Brain& src)
{
	*this = src;
	std::cout << "Brain copy constructor called\n";
}

void Brain::setIdeas(std::string ideas, int i)
{
	if (i < 0 || i > 100)
	{
		std::cout << "Error!!![0 - 99]\n";
		return ;
	}
	this->_ideas[i] = ideas;
}

const std::string Brain::getIdeas(int i) const
{
	if (i < 0 || i > 100)
	{
		std::cout << "Error!!![0 - 99]\n";
		return ("No ideas in that index found");
	}
	return (this->_ideas[i]);
}