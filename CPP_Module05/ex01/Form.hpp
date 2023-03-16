/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:08:42 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/16 16:24:33 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	Form(void);
	Form(std::string const name, int gradeToSign, int gradeToExecute);
	Form(const Form& src);
	Form& operator=(const Form& src);
	~Form();

	const std::string	getName() const;
	bool			getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;


	void			beSigned(Bureaucrat const &src);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char* what() const throw ()
			{
				return ("Grade is too High\n");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char* what() const throw ()
			{
				return ("Grade is too Low\n");
			}
	};
};

std::ostream& operator<<(std::ostream& output, const Form& src);

#endif