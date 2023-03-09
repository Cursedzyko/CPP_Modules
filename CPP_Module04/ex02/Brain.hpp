/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:04:16 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/06 15:45:31 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:
	std::string _ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain& operator=(const Brain& src);
	Brain(const Brain& src);
	
	void setIdeas(std::string ideas, int i);
	const std::string getIdeas(int i) const;
};

#endif