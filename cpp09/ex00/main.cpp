/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:19:15 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/30 16:32:21 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: could not open file." << std::endl;
		return (EXIT_FAILURE);
	}

	std::ifstream	file(argv[1], std::ifstream::in);
	if (!file.is_open())
	{
		std::cout << "Error: could not open file." << std::endl;
		return (EXIT_FAILURE);
	}

	std::ifstream	database("./data.csv", std::ifstream::in);
	if (!database.is_open())
	{
		std::cout << "Error: could not open database." << std::endl;
		return (EXIT_FAILURE);
	}
	
	BitcoinExchange	btc;
	btc.readDataBase(database);
}