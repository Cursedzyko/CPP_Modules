/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:44:11 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/16 00:32:54 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat a("john", 1);
			std::cout << a;
			a.increase();
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
	
	return (0);
}