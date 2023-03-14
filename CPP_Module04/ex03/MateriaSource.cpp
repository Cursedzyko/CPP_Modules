/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 14:02:17 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/14 15:09:43 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void){
	for (int i = 0; i < 4; i++)
		this->_in[i] = NULL;
	std::cout << "MateriaSource constructor called\n";
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete this->_in[i];
	std::cout << "MateriaSource destructor called\n";
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	*this = src;
	std::cout << "MateriaSource copy constructor called\n";
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
		this->_in[i] = src._in[i];
	std::cout << "MateriaSource Copy assignment operator called\n";
	return (*this);
}

void MateriaSource::learnMateria(AMateria* tmp)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_in[i] == NULL)
		{
			this->_in[i] = tmp;
			return ;
		}
	}
	delete tmp;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if(this->_in[i]->getType() == type)
		{
			std::cout << "Created " << this->_in[i]->getType() << std::endl;
			return (this->_in[i]->clone());
		}
	}
	return (0);
}