/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 23:44:11 by zyunusov          #+#    #+#             */
/*   Updated: 2023/03/26 19:59:47 by zyunusov         ###   ########.fr       */
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
		Intern r;
		AForm* rr;
		AForm* sc;
		AForm* pp;
		AForm* w;
		rr = r.makeForm("robotomy request", "Bender");
		sc = r.makeForm("shrubbery Creation", "Bender");
		pp = r.makeForm("presidential Pradon", "Bender");
		w = r.makeForm("Wrong Wrong", "Bender");
		std::cout << "----------------------------------------------------------\n\n";
		delete rr;
		delete sc;
		delete pp;
	}
    return 0;
}