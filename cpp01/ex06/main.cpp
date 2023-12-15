/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:21:06 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/15 13:51:53 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

enum ComplaintType
{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    UNKNOWN
};

ComplaintType getComplaintType(const std::string& str)
{
    if (str == "DEBUG") return DEBUG;
    else if (str == "INFO") return INFO;
    else if (str == "WARNING") return WARNING;
    else if (str == "ERROR") return ERROR;
    else return UNKNOWN;
}

int	main(int argc, char **argv)
{
	Harl karen;
	std::string	input;

	if (argc != 2)
	{
		std::cout << "This program only accepts 1 argument" << std::endl;
		return (1);
	}
	input = argv[1];
	ComplaintType complaint = getComplaintType(input);

	switch (complaint)
	{
		case DEBUG:
			std::cout << "[ DEBUG ]" << std::endl;
			karen.complain("DEBUG");
			std::cout << "\n[ INFO ]" << std::endl;
			karen.complain("INFO");
			std::cout << "\n[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << "\n[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			break ;
		case INFO:
			std::cout << "[ INFO ]" << std::endl;
			karen.complain("INFO");
			std::cout << "\n[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << "\n[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			break ;
		case WARNING:
			std::cout << "[ WARNING ]" << std::endl;
			karen.complain("WARNING");
			std::cout << "\n[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			break ;
		case ERROR:
			std::cout << "[ ERROR ]" << std::endl;
			karen.complain("ERROR");
			break ;
		case UNKNOWN:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		default:
			std::cout << "Harl filter error" << std::endl;
	}
}