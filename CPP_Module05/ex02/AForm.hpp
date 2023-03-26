/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:08:42 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/17 13:20:49 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
	const std::string _name;
	bool _isSigned;
	const int _gradeToSign;
	const int _gradeToExecute;

public:
	AForm(void);
	AForm(std::string const name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& src);
	AForm& operator=(const AForm& src);
	virtual ~AForm();

	const std::string	getName() const;
	bool			getIsSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;


	void			beSigned(Bureaucrat const &src);
	virtual void	execute(Bureaucrat const & executor) = 0;

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

	class FormNotSignException : public std::exception
	{
		public:
			virtual const char* what() const throw ()
			{
				return ("Form is not signed exception\n");
			}
	};
};

std::ostream& operator<<(std::ostream& output, const AForm& src);

#endif