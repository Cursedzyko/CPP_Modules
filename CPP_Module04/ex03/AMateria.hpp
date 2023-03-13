/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 14:16:49 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/13 15:12:02 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria {
protected:
	std::string _type;
public:
	AMateria(std::string const & type);
	AMateria(void);
	virtual ~AMateria();
	AMateria(const AMateria& src);
	AMateria& operator=(const AMateria& src);

	std::string const & getType() const;
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target) = 0;
};

#endif