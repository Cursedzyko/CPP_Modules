/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:44:52 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/17 17:37:58 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string const &name, int grade): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		std::cout << "Bureaucrat Constructor called\n";
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor called\n";
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	this->_grade = src._grade;
	std::cout << "Bureaucrat Copy assignment operator called\n";
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat& src): _name(src._name), _grade(src._grade)
{
	std::cout << "Bureaucrat Copy constructor called\n";
}

const std::string& Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::increase()
{
	this->_grade -= 1;
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrease()
{
	this->_grade += 1;
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream &output, Bureaucrat const &src)
{
	output << "Name: " << src.getName() << ", Grade: " << src.getGrade() << std::endl;
	return (output);
}

void	Bureaucrat::executeForm(AForm const & form) {
    if ( this->_grade > form.getGradeToExecute())
		throw Bureaucrat::GradeTooLowException();
	if (!form.getIsSigned())
		throw AForm::FormNotSignException();
    std::cout << "bureaucrat executed form\n";
}

void	Bureaucrat::signForm(AForm const &src)
{
	if (this->_grade <= src.getGradeToSign())
		std::cout << this->_name << " signed " << src.getName() << std::endl;
	else
		std::cout << this->_name << "  couldn’t sign " << src.getName() << " because required grade is too high" << std::endl;
}