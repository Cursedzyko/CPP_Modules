/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 16:04:37 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/17 17:44:25 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "PresidentialPardonForm constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(void): AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "Unknown target";
	std::cout << "PresidentialPardonForm default constructor called\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = src._target;
	std::cout << "PresidentialPardonForm Copy constructor called\n";
}
PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	this->_target = src._target;
	*this = src;
	std::cout << "PresidentialPardonForm Copy assignment operator called\n";
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
	if (executor.getGrade() > this->_gradeToExecute)
		throw Bureaucrat::GradeTooLowException();
	else if (!this->_isSigned)
		throw PresidentialPardonForm::FormNotSignException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox.\n";
}