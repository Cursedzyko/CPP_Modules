/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:44:11 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/26 19:51:22 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main()
{
		std::cout << "----------------------------------------------------------\n\n";
	{
		std::cout << "----------------------------------------------------------\n";
        std::cout << "|           TEST Intern                                   |\n";
        std::cout << "----------------------------------------------------------\n";
		Intern someRandomIntern;
		AForm* rrf;
		AForm* scf;
		AForm* ppf;
		AForm* wrong;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		scf = someRandomIntern.makeForm("Shrubbery Creation", "Bender");
		ppf = someRandomIntern.makeForm("Presidential Pradon", "Bender");
		wrong = someRandomIntern.makeForm("Wrong Wrong", "Bender");
		std::cout << "----------------------------------------------------------\n\n";
		delete rrf;
		delete scf;
		delete ppf;
	}
    return 0;
}