/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 16:31:05 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/14 14:24:09 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure(void);
	Cure(const Cure& src);
	Cure& operator=(const Cure& src);
	~Cure(void);

	Cure* clone() const;
	void use(ICharacter& target);
};


#endif