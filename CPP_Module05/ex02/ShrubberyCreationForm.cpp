/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 17:16:37 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/17 17:41:43 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "ShrubberyCreationForm constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = "Unknown target";
	std::cout << "ShrubberyCreationForm default constructor called\n";
}

ShrubberyCreationForm:: ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->_target = src._target;
	std::cout << "ShrubberyCreationForm Copy constructor called\n";
}
ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& src)
{
	this->_target = src._target;
	*this = src;
	std::cout << "ShrubberyCreationForm Copy assignment operator called\n";
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destructor called\n";
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor){
	if (executor.getGrade() > this->_gradeToExecute)
		throw Bureaucrat::GradeTooLowException();
	else if (!this->_isSigned)
		throw ShrubberyCreationForm::FormNotSignException();
	std::ofstream outfile;
	outfile.open((this->_target + "_shrubbery").c_str());
	if (outfile.fail())
	{
		std::cout << "Failed in creation of file\n";
		return ;
	}
	outfile << " HELLO\n";

}