/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:44:14 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/16 00:22:42 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
private:
	std::string const _name;
	int _grade;
public:
	Bureaucrat(std::string const &name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& src);
	Bureaucrat& operator=(const Bureaucrat& src);

	const std::string& getName() const;
	int getGrade() const;
	void increase();
	void decrease();
	
	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high\n");
			}
	};
	
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low\n");
			}
	};
};

std::ostream &operator<<(std::ostream& output, Bureaucrat const &src);

#endif