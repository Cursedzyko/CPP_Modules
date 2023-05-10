/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zyunusov <zyunusov@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:31:11 by zyunusov          #+#    #+#             */
/*   Updated: 2023/05/10 12:51:40 by zyunusov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, double> BitcoinExchange::_map = std::map<std::string, double>();


BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &src)
{
	if (this != &src)
		new (this) BitcoinExchange(src);
	return (*this);
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::initDataB(const std::string & dataB) const
{
	std::ifstream dataFd(dataB.c_str());
	if (!(dataFd.is_open()))
	{
		std::cerr << "Error: Data base not found!!!\n";
		exit(0);
	}
	std::string line, date;
	std::size_t del;
	double value;

	getline(dataFd, line);
	while(getline(dataFd,line))
	{
		del = line.find(',');
		if(del == std::string::npos)
		{
			std::cerr << "Error: Bad formated data!!!\n";
			exit(0);
		}
		date = line.substr(0, del);
		value = std::atof(line.substr(del + 1).c_str());
		BitcoinExchange::_map[date] = value;
	}
	dataFd.close();
}

void BitcoinExchange::display(const std::string &dataB, const std::string &infile) const
{
	this->initDataB(dataB);
	this->displayMap(infile);
}

void  BitcoinExchange::displayMap( const std::string & infile) const
{
	std::ifstream inFile(infile.c_str());
	if (!(inFile.is_open()))
	{
		std::cout << "Error: Infile not found!!!\n";
		exit(0);
	}

	std::string line, date = "";
	double nb_btc = 0.0;
	int check = 0;

	getline(inFile, line);
	while(getline(inFile, line))
	{
		check = checkValidLine(line, date, &nb_btc);
		switch (check)
		{
			case -1:
				std::cout << "Error: Bad input: " << line << "\n";
				break;
			case 1:
				std::cout << "Error: Not a posiitve number." << "\n";
				break;
			case 2:
				std::cout << "Error: Too large a number." << "\n";
				break;
			default:
				std::cout << date << " => " << nb_btc << " = " << this->getValue(date) * nb_btc << "\n";
				break;
		}
	}
	inFile.close();
}

double	BitcoinExchange::getValue(const std::string & date) const
{
	std::map<std::string, double>::iterator it;
	it = BitcoinExchange::_map.find(date);
	if (it != BitcoinExchange::_map.end())
		return it->second;
	it = BitcoinExchange::_map.upper_bound(date);
	if (it != _map.begin())
		--it;
	return it->second;
}

int BitcoinExchange::checkValidLine(const std::string &line, \
									std::string &date, double* nb_btc) const
{
	size_t del, dateSep, dateSep2;
	std::string year, month, day;
	
	del = line.find('|');
	if (del == std::string::npos)
		return -1;
	if(line[del - 1] != ' ' || line[del + 1] != ' ')
		return -1;
	dateSep = line.find('-');
	if(dateSep == std::string::npos)
		return -1;
	year = line.substr(0, dateSep);
	if(this->validYear(year))
		return -1;
	dateSep2 = line.find('-', dateSep + 1);
	if(dateSep2 == std::string::npos)
		return -1;
	month = line.substr(dateSep + 1, dateSep2 - (dateSep + 1));
	if(this->validMonth(month))
		return -1;
	day = line.substr(dateSep2 + 1, del - 1 - (dateSep2 + 1));
	if(this->validDay(day))
		return -1;
	date = line.substr(0, del - 1);
	*nb_btc = std::atof(line.substr(del + 2).c_str());
	return (this->validNbBtc(*nb_btc));
}

int  BitcoinExchange::validYear(std::string & year) const
{
	if(year.size() != 4)
		return 1;
	if(std::atoi(year.c_str()) <= 0)
		return 1;
	return 0;
}

int  BitcoinExchange::validMonth(std::string & month) const
{
	int m;
	
	if(month.size() != 2)
		return 1;
	m = std::atoi(month.c_str());
	if( m <= 0 || m > 12)
		return 1;
	return 0;
}

int  BitcoinExchange::validDay(std::string & day) const
{
	int d; 

	if(day.size() != 2)
		return 1;
	d = std::atoi(day.c_str());
	if(d <= 0 || d > 31)
		return 1;
	return 0;
}

int BitcoinExchange::validNbBtc(double nb_btc) const{
	if(nb_btc > 1000.0)
		return 2;
	if (nb_btc == 0.0)
		return -1;
	if (nb_btc < 0.0)
		return 1;
	return 0;
}