/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:19:15 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/31 19:29:16 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (EXIT_FAILURE);
	}

	std::ifstream	file(argv[1], std::ifstream::in);
	if (!file.is_open())
	{
		std::cerr << "Error: could not open file." << std::endl;
		return (EXIT_FAILURE);
	}

	std::ifstream	database("./data.csv", std::ifstream::in);
	if (!database.is_open())
	{
		std::cerr << "Error: could not open database." << std::endl;
		return (EXIT_FAILURE);
	}
	
	BitcoinExchange	btc;
	btc.readDataBase(database);

	std::string	line;

	std::getline(file, line); //skip first line

	while (std::getline(file, line))
	{
		size_t	len = line.find('|');
		if (len == std::string::npos || line.length() < (len + 2))
		{
			std::cerr << "Input file parsing error, please fix the format of the input" << std::endl;
			continue ;
		}

		std::string	date = line.substr(0, len - 1);
		if (!btc.ValidDate(date))
			continue ;

		std::string	rate_str = line.substr(len + 2);
		if (!btc.ValidValue(rate_str))
			continue ;
		
		float rate = std::stof(rate_str);

		std::cout << date << " => " << rate << " = " << std::setprecision(2)
				  << rate * btc.getRateFromDataBase(date) << std::endl;
	}
	file.close();
	database.close();
	return (EXIT_SUCCESS);
}