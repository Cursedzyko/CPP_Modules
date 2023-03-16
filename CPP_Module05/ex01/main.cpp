/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:44:11 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/16 16:36:13 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		try
		{
			Bureaucrat a("john", 1);
			std::cout << a;
			try{
				a.increase();
			}
			catch(Bureaucrat::GradeTooHighException& e)
			{
				std::cerr << e.what() << '\n';
			}
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Bureaucrat c("JJ", 0);
			std::cout << c;
		}
		catch(Bureaucrat::GradeTooHighException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Bureaucrat b("Jim", 156);
			std::cout << b;
		}
		catch(Bureaucrat::GradeTooLowException& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		std::cout << "_______________________________________________________________________\n";
		try{
			Form f1 ("F1", 50, 100);
			std::cout << f1;
			Bureaucrat b("Tom", 10);
			b.signForm(f1);
		}
		catch(Form::GradeTooLowException& e){
			std::cout << e.what();
		}
	}
	std::cout << "\n_______________________________________________________________________\n";
	{
		try{
			Form f2 ("F2", 50, 100);
			std::cout << f2;
			Bureaucrat b1("John", 50);
			b1.signForm(f2);
		}
		catch(Form::GradeTooLowException& e){
			std::cout << e.what();
		}
	}
	
	return (0);
}