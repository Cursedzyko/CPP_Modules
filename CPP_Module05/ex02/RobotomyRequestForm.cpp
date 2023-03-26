/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:06:43 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/17 17:09:445 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "RobotomyRequestForm constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(void): AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "Unknown target";
	std::cout << "RobotomyRequestForm default constructor called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = src._target;
	std::cout << "RobotomyRequestForm Copy constructor called\n";
}
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	this->_target = src._target;
	*this = src;
	std::cout << "RobotomyRequestForm Copy assignment operator called\n";
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destructor called\n";
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor){
	if (executor.getGrade() > this->_gradeToExecute)
		throw Bureaucrat::GradeTooLowException();
	else if (!this->_isSigned)
		throw RobotomyRequestForm::FormNotSignException();
	std::cout << "Some drilling noises!!!\n";
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized succefully 50\% of the time\n";
	else
		std::cout << "the robotomy of " << this->_target << " failed.\n";
}