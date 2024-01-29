/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:19:11 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/29 19:27:10 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

bool	ValidValue(const std::string& value)
{
	try
	{
		std::stof(value);	
	}
	catch (const std::invalid_argument& e){
		return(false);}

	return (true);
}

bool	ValidDate(const std::string& date)
{
	if (date.length() != 10)
		return (false);

	int		year, month, day;
	char	sep1, sep2;
}
