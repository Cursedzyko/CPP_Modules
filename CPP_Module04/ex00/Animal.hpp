/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 12:01:53 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/02 12:30:28 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Cat.hpp"

# define BLACK "\033[30m"
# define GREY "\033[90m"
# define RED "\033[31m"
# define CYAN "\033[36m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[94m"
# define MAGENTA "\033[35m"

# define NORMAL "\033[0m"
# define FAT "\033[1m"
# define DIM "\033[2m"
# define UNDERLINE "\033[4m"
# define CROSS "\033[9m"
# define BACKGROUND "\033[7m"
# define GONE "\033[8m"
# define CLEAR_TERM "\e[1;1H\e[2J"


class Animal
{
protected:
	std::string _type;
public:
	Animal(void);
	~Animal(void);
	Animal(const Animal& src);
	Animal &operator=(const Animal& src);
	const std::string getType(void);
	void setType(void);
	void makeSound();
};

#endif