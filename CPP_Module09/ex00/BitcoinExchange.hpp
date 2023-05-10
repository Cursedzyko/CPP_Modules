#ifndef BITCOIN_EXCHANGE_HPP
# define BITCOIN_EXCHANGE_HPP

#include <iostream>
#include <map>
#include <iterator>
#include <fstream>
#include <string>
#include <cstdlib>

class BitcoinExchange
{
private:
	static std::map<std::string, double> _map;

	void initDataB(const std::string  & dataB) const;
	void  displayMap( const std::string & infile) const;
	double	getValue(const std::string & date) const;
	int checkValidLine(const std::string &line, \
									std::string &date, double* nb_btc) const;
	int  validYear(std::string & year) const;
	int  validMonth(std::string & month) const;
	int  validDay(std::string & day) const;
	int  validNbBtc(double nb_btc) const;
public:
	BitcoinExchange();
	BitcoinExchange &operator=(const BitcoinExchange &src);
	~BitcoinExchange();

	void display(const std::string &dataB, const std::string &infile) const;
};





#endif