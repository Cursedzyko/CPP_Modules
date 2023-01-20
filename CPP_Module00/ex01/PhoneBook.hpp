/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:18:19 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/20 15:32:57 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _PHONEBOOK_HPP
# define _PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"


class PhoneBook
{
private:
	Contact contacts[8];
	int amount;

public:
	PhoneBook();
	virtual ~PhoneBook();
	void Display();
	void Add();
	void Search();
	void DisplayHead(void);
};

#endif