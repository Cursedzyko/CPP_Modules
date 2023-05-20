/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:49:42 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/12 13:13:09 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <string>
# include <cstdlib>
# include <cstring>

class RPN
{
private:
	std::stack<double> res;
	int checkOper(char c);
	void calculate(double a, double b, char op);
public:
	void execution(char *expr);
	RPN();
	~RPN();
	RPN(const RPN & src);
	RPN & operator= (const RPN & src);
};



#endif