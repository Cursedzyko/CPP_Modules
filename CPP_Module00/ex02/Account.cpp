/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 16:49:00 by zyunusov          #+#    #+#             */
/*   Updated: 2023/01/27 17:14:37 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:"<< initial_deposit << ";";
    std::cout << "created" << std::endl;
}

Account::Account()
{
    this->_accountIndex = this->_nbAccounts++;
    this->_amount = 0;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:0;";
    std::cout << "created" << std::endl;
}

Account::~Account()
{
    Account::_displayTimestamp();
    this->_nbAccounts--;
    std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

void Account::_displayTimestamp()
{
    time_t time_ptr;
    time_ptr = time(NULL);
    
    tm *utc_tm = localtime(&time_ptr);
    
    std::cout << std::setfill('0')<< "[" << (utc_tm->tm_year + 1900)
            << std::setw(2) << utc_tm->tm_mon + 1
            << std::setw(2) << utc_tm->tm_mday << "_"
            << std::setw(2) << utc_tm->tm_hour
            << std::setw(2) << utc_tm->tm_min   
            << std::setw(2) << utc_tm->tm_sec << "] ";
}

int Account::getNbAccounts()
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount()
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits()
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts << ";";
    std::cout << "total:" << Account::_totalAmount << ";";
    std::cout << "deposits:" << Account::_totalNbDeposits << ";";
    std::cout << "withdrawls:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" <<  this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" <<  this->_amount << ";";
	if (this->_amount < withdrawal)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		std::cout << "amount:" << this->_amount << ";";
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	}
	return (true);
}

int Account::checkAmount(void) const
{
	return (this->_amount > 0);
}

void Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}