/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:56:44 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/14 14:14:44 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria* _in[4];
public:
	MateriaSource(void);
	~MateriaSource();
	MateriaSource(const MateriaSource& src);
	MateriaSource& operator=(const MateriaSource& src);

	void learnMateria(AMateria* tmp);
	AMateria* createMateria(std::string const & type);
};

#endif