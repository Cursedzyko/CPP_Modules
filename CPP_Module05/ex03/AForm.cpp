/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:27:09 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/16 16:25:42 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(void): _name("!?!?!"), _isSigned(false),
	_gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "AForm default constructor called\n";
}


AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute): _name(name), 
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	this->_isSigned = false;
	if (this->_gradeToSign < 1 || this-> _gradeToExecute < 1)
		throw AForm::GradeTooHighException();
	else if (this->_gradeToSign > 150 || this-> _gradeToExecute > 150)
		throw AForm::GradeTooLowException();
	else
		std::cout << "AForm Constructor called\n";
}

AForm::AForm(const AForm& src): _name(src._name),  _isSigned(false), 
	_gradeToSign(src._gradeToExecute), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "AForm Copy Constructor called\n";
}

AForm& AForm::operator=(const AForm& src)
{
	this->_isSigned = src._isSigned;
	std::cout << "AForm Copy assignment operator called\n";
	return (*this);
}

AForm::~AForm()
{
	std::cout << "AForm Destructor called\n";
}

const std::string	AForm::getName() const
{
	return (this->_name);
}

bool			AForm::getIsSigned() const
{
	return (this->_isSigned);
}

int			AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int			AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}




std::ostream& operator<<(std::ostream& output, const AForm& src)
{
	output << "Name: " << src.getName() << std::endl \
			<< "IsSigned: " << src.getIsSigned() << std::endl \
			<< "GradeToSign: " << src.getGradeToSign() << std::endl \
			<< "GradeToExecute: " << src.getGradeToExecute() << std::endl;
	return (output);
}

void			AForm::beSigned(Bureaucrat const &src)
{
	if (src.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}