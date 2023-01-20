/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:36:43 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/20 16:15:49 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CONTACT_HPP
# define _CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
private:
	int	index;
	static std::string field_names[5];
	std::string info[5];
	enum Field
	{
		FirstName = 0,
		LastName,
		Nickname,
		PhNum,
		Secret
	};
public:
	Contact();
	virtual ~Contact();

	bool set_info(int in, int res);
	void DisplayHeader(void);
	void DisplayCont(void);
};

#endif
