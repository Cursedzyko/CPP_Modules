/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 18:18:02 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/26 19:49:43 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "INtern constructor called\n";
}

Intern::~Intern()
{
	std::cout << "INtern destructor called\n";
}

Intern::Intern(const Intern& src)
{
	*this = src;
	std::cout << "INtern copy constructor called\n";
}

Intern& Intern::operator=(const Intern& src)
{
	*this = src;
	std::cout << "INtern copy assignment operator called\n";
	return (*this);
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	std::string lowerForm;
	for (size_t i = 0; i < form.length(); i++)
		lowerForm.push_back((char)std::tolower(form[i]));
	std::string arr[3] = {"shrubbery creation", "presidential pradon", "robotomy request"};
	AForm* (Intern::*maker[4])(std::string) = {&Intern::makePresident, &Intern::makeRobotomy, 
			&Intern::makeShruberry};
	for (int i = 0; i < 4; i++)
	{
		if (arr[i] == lowerForm)
			return ((this->*maker[i])(target));
	}
	std::cout << "This form doesnt exist\n";
	return (NULL);
}

AForm* Intern::makePresident(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm* Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makeShruberry(std::string target)
{
	return (new ShrubberyCreationForm(target));
}