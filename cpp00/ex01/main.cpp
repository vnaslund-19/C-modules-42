/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 19:12:41 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/15 13:26:49 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string	input;

	std::cout << "Welcome to my phonebook\nValid commands are ADD, SEARCH & EXIT\n";
	while (1)
	{
		std::cout << "Please enter a command > ";
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT")
			break ;
		else
			std::cout << "Invalid command" << std::endl;
	}
}