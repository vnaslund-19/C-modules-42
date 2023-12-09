/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:47:27 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/09 16:39:21 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::string		input;
	std::string		opponent;
	unsigned int	amount;

	std::cout << "Welcome to FragTrap fight simulator\n" 
			  << "What do you want to name your fighter > ";

	getline(std::cin, input);
	FragTrap fighter(input);

	std::cout << "What do you want to name your opponent > ";
	getline(std::cin, opponent);
	
	std::cout << "Starting fight simulation...\nValid actions are ATTACK, TAKEDAMAGE, REPAIR, HIGHFIVE & EXIT" << std::endl;
	while (1)
	{
		std::cout << "Action > ";
		getline(std::cin, input);
		
		if (input == "ATTACK")
			fighter.attack(opponent);
		else if (input == "HIGHFIVE")
			fighter.highFivesGuys();
		else if (input == "TAKEDAMAGE")
		{
			std::cout << "How much damage do you want to take? > ";
			while (!(std::cin >> amount) || amount < 0)
			{
				std::cout << "Invalid input, only unsigned ints allowed" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "How much damage do you want to take? > ";
			}
			fighter.takeDamage(amount);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (input == "REPAIR")
		{
			std::cout << "How many hitpoints do you want to add? > ";
			while (!(std::cin >> amount) || amount < 0)
			{
				std::cout << "Invalid input, only unsigned ints allowed" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "How many hitpoints do you want to add? > ";
			}
			fighter.beRepaired(amount);
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		else if (input == "EXIT")
		{
			std::cout << "Exiting program" << std::endl;
			break ;
		}
		else
			std::cout << "Invalid input🤡" << std::endl;
	}
}