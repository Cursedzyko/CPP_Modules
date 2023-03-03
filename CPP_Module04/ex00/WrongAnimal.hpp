/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:23:30 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/03 14:40:10 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

#include <iostream>
# define BLUE "\033[94m"
# define MAGENTA "\033[35m"
# define NORMAL "\033[0m"


class WrongAnimal{
protected:
	std::string _type;
public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal& operator=(const WrongAnimal& src);
	WrongAnimal(const WrongAnimal& src);

	const std::string getType(void) const;
	void setType(std::string type);

	virtual void makeSound(void) const;
};


#endif