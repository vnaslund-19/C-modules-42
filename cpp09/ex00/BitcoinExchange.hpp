/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:24:08 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/30 16:33:17 by vnaslund         ###   ########.fr       */
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

		bool 	ValidDate(const std::string& date);
		bool 	ValidValue(const std::string& value);

	private:
		std::map<std::string, float> _dataBase;
};

#endif