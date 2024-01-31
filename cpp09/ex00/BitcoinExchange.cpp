/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:19:11 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/31 19:42:23 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(void)
{
	
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other)
{
	*this = other;
}

BitcoinExchange::~BitcoinExchange()
{
	
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other)
{
	if (this == &other)
		return *this;

	this->_dataBase = other._dataBase;
	return (*this);
}

bool	BitcoinExchange::ValidValue(const std::string& value)
{
	float	res;

	try
	{
		res = std::stof(value);	
	}
	catch (const std::invalid_argument& e) { return false; }
    catch (const std::out_of_range& e) { return false; }

	if (res > 1000 || res < 0)
		return (false);
	else
		return (true);
}

bool	isNumeric(const std::string& str) 
{
    return (!str.empty() && std::all_of(str.begin(), str.end(), ::isdigit));
}

bool	BitcoinExchange::ValidDate(const std::string& date)
{
	if (date.length() != 10)
		return (false);

	int					year, month, day;
	std::string			s;
	std::istringstream	ss(date);
	int					i = 0;

	while (std::getline(ss, s, '-'))
	{
		if (i == 0)
		{
			if (s.length() != 4 || !isNumeric(s))
			{
				std::cout << "Year has wrong format" << std::endl;
				return (false);
			}
		}
		if (i == 1)
		{
			if (s.length() != 2 || !isNumeric(s) || std::stoi(s) > 12)
			{
				std::cout << "Month has wrong format" << std::endl;
				return (false);
			}
		}
		if (i == 2)
		{
			if (s.length() != 2 || !isNumeric(s) || std::stoi(s) > 31)
			{
				std::cout << "Day has wrong format" << std::endl;
				return (false);
			}
		}
		if (++i > 3)
			return (false);
	}
	return (true);
}

void	BitcoinExchange::readDataBase(std::ifstream& dataBase)
{
	std::string line;
    size_t delim;

    std::getline(dataBase, line); // skip first line
    while (std::getline(dataBase, line))
    {
        delim = line.find(',');
        std::string rate = line.substr(delim + 1);
        // set a new pair on the map <date, rate>
        this->_dataBase[line.substr(0, delim)] = std::stof(rate);
    }
    dataBase.close();
}

float 	BitcoinExchange::getRateFromDataBase(const std::string& date)
{
	std::map<std::string, float>::iterator it = _dataBase.lower_bound(date);
    if (it != _dataBase.end() && it->first == date)
        return it->second;
    if (it == _dataBase.begin())
        return 0; // or some default rate, or handle error
    --it;
    return it->second;
}

