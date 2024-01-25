/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:11:04 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/25 19:30:39 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <cstdlib>
#include <climits>

ScalarConverter::ScalarConverter(void)
{
	
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
	*this = other;
}

ScalarConverter::~ScalarConverter()
{
	
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return (*this);
}

void	ScalarConverter::convert(const std::string& str)
{
	std::string	specialTypes[6] = 
	{
		"-inff", "+inff",
		"-inf", "+inf", "nan"
	};

	std::string	toChar = "";
	int			toInt = 0;
	float		toFloat = 0;
	double		toDouble = 0;

	if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		toChar = str[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
	}

	toInt = std::atoi(str.c_str());

	if (str[str.length() - 1] == 'f')
	{
		toFloat = std::atof(str.c_str());
		toDouble = static_cast<double>(toFloat);
	}
	else 
	{
		toDouble = std::atof(str.c_str());
		toFloat = static_cast<float>(toDouble);
	}
}