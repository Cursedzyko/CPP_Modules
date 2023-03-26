/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:44:11 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/26 17:11:09 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST ShrubberyCreationForm                   |\n";
        std::cout << "----------------------------------------------------------\n";
		ShrubberyCreationForm my_shrub;
		std::cout << my_shrub.getName() << std::endl;
		ShrubberyCreationForm my_shrub2(my_shrub);
		std::cout << my_shrub.getGradeToSign() << std::endl;
		ShrubberyCreationForm test("Jut");
		try 
		{
			Bureaucrat executor("Android", 10);
			try 
			{
				test.beSigned(executor);
				test.execute(executor);
			}
			catch(ShrubberyCreationForm::FormNotSignException& err)
			{
				std::cout << err.what();
			}
		}
		catch (Bureaucrat::GradeTooLowException& err) {
			std::cout << err.what();
		}
		std::cout << "----------------------------------------------------------\n\n";
		std::cout << "--------- TEST Bureaucarat executForm() ----------------\n";
		try
		{
			ShrubberyCreationForm test2;
			Bureaucrat bureau("42 STAFF", 149);
			bureau.executeForm(test2);
		}
		catch(Bureaucrat::GradeTooLowException& err)
		{
			std::cerr << err.what() << '\n';
		}
	}
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST PresidentialPardonForm                   |\n";
        std::cout << "----------------------------------------------------------\n";
		PresidentialPardonForm test1("Hey");
		std::cout << test1.getName() << std::endl;
		try 
		{
			Bureaucrat ex1("Bureaucrat", 105);
			test1.execute(ex1);
		}
		catch(Bureaucrat::GradeTooLowException& err)
		{
			std::cout << err.what() << '\n';
		}
	}
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST RobotomyRequestForm                     |\n";
        std::cout << "----------------------------------------------------------\n";
		RobotomyRequestForm my_request("42W");
		try 
		{
			Bureaucrat toRobotize("Bureaucrat clean", 12);
			my_request.beSigned(toRobotize);
			my_request.execute(toRobotize);
		}
		catch(Bureaucrat::GradeTooLowException& err)
		{
			std::cerr << err.what() << "\n";
		}
	}
    return 0;
}