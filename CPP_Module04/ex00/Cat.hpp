/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:29:42 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/03 14:08:19 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat(void);
	virtual ~Cat(void);
	Cat& operator=(const Cat& src);
	Cat(const Cat& src);

	void makeSound(void) const;
};


#endif