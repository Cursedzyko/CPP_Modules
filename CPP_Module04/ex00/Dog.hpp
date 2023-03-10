/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:00:07 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/03 14:08:34 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal{
public:
	Dog(void);
	virtual ~Dog(void);
	Dog& operator=(const Dog& src);
	Dog(const Dog& src);

	void makeSound(void) const;
};

#endif