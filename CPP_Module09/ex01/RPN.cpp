/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 11:50:15 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/12 13:13:20 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


RPN::RPN()
{
}

RPN::~RPN()
{
}

RPN::RPN(const RPN & src): res(src.res)
{
}

RPN & RPN::operator= (const RPN & src)
{
	if( this != &src)
		new (this) RPN(src);
	return (*this);
}

void RPN::execution(char *exp)
{
	if (!exp)
	{
		std::cerr << "ERROR\n";
		return ;
	}
	double a, b, op;
	char tmp[11];
	int len, i;

	i = 0;
	while (exp[i])
	{
		if (exp[i] == ' ')
			++i;
		else if (exp[i] && isdigit(exp[i]))
		{
			len = 0;
			while(exp[i] && isdigit(exp[i]))
			{
				tmp[len] = exp[i];
				++i;
				len++;
			}
			tmp[len] = '\0';
			op = std::atoi(tmp);
			this->res.push(op);
			memset(tmp, '\0', len);
		}
		else if(exp[i] && this->checkOper(exp[i]))
		{
			if (this->res.size() < 2)
			{
				std::cerr << "ERROR\n";
				return ;
			}
			a = this->res.top();
			this->res.pop();
			b = this->res.top();
			this->res.pop();
			this->calculate(a, b, exp[i]);
			++i;
		}
		else
		{
			std::cerr << "ERROR\n";
			return ;
		}
	}
	i--;
	while (exp[i] == ' ')
		i--;
	if (!checkOper(exp[i]))
		std::cerr << "ERROR\n";
	else
		std::cout << this->res.top() << "\n";
	
}

int RPN::checkOper(char c)
{
	if (c == '+' || c == '-')
		return 1;
	if (c == '/' || c == '*')
		return 1;
	return 0;
}

void RPN::calculate(double a, double b, char op)
{
	double tres;

	if (op == '+')
		tres = a + b;
	else if (op == '-')
		tres = b - a;
	else if (op == '/')
		tres = b / a;
	else if (op == '*')
		tres = a * b;
	this->res.push(tres);
}
