/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:00:07 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/06 15:01:52 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal{
private:
	Brain *_brain;
public:
	Dog(void);
	virtual ~Dog(void);
	Dog& operator=(const Dog& src);
	Dog(const Dog& src);

	void makeSound(void) const;
	Brain	*getBrain(void) const;
};

#endif