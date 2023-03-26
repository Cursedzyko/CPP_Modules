/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:17:28 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/26 19:43:01 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern(void);
	~Intern();
	Intern(const Intern& src);
	Intern &operator=(const Intern& src);

	AForm* makeForm(std::string form, std::string target);
	AForm* makePresident(std::string target);
	AForm* makeRobotomy(std::string target);
	AForm* makeShruberry(std::string target);
};


#endif