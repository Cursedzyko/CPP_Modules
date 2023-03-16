/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:27:09 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/16 16:25:42 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void): _name("!?!?!"), _isSigned(false),
	_gradeToSign(150), _gradeToExecute(150)
{
	std::cout << "Form default constructor called\n";
}


Form::Form(std::string const name, int gradeToSign, int gradeToExecute): _name(name), 
	_gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	this->_isSigned = false;
	if (this->_gradeToSign < 1 || this-> _gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (this->_gradeToSign > 150 || this-> _gradeToExecute > 150)
		throw Form::GradeTooLowException();
	else
		std::cout << "Form Constructor called\n";
}

Form::Form(const Form& src): _name(src._name),  _isSigned(false), 
	_gradeToSign(src._gradeToExecute), _gradeToExecute(src._gradeToExecute)
{
	std::cout << "Form Copy Constructor called\n";
}

Form& Form::operator=(const Form& src)
{
	this->_isSigned = src._isSigned;
	std::cout << "Form Copy assignment operator called\n";
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor called\n";
}

const std::string	Form::getName() const
{
	return (this->_name);
}

bool			Form::getIsSigned() const
{
	return (this->_isSigned);
}

int			Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int			Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}




std::ostream& operator<<(std::ostream& output, const Form& src)
{
	output << "Name: " << src.getName() << std::endl \
			<< "IsSigned: " << src.getIsSigned() << std::endl \
			<< "GradeToSign: " << src.getGradeToSign() << std::endl \
			<< "GradeToExecute: " << src.getGradeToExecute() << std::endl;
	return (output);
}

void			Form::beSigned(Bureaucrat const &src)
{
	if (src.getGrade() <= this->_gradeToSign)
		this->_isSigned = true;
	else
		throw GradeTooLowException();
}