/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:24:08 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/31 19:12:59 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <sstream>
# include <fstream>
# include <string>
# include <algorithm>
# include <cctype>
# include <map>

class	BitcoinExchange
{
	public:
		BitcoinExchange(void);
        BitcoinExchange(const BitcoinExchange& to_copy);
        BitcoinExchange& operator=(const BitcoinExchange& to_copy);
        ~BitcoinExchange(void);

		void	readDataBase(std::ifstream& dataBase);
		float 	getRateFromDataBase(const std::string& date);

		bool 	ValidDate(const std::string& date);
		bool 	ValidValue(const std::string& value);

	private:
		std::map<std::string, float> _dataBase;
};

#endif