/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:52:13 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 13:38:25 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;
	std::string	name;
	
	std::cout << "How many zombies do you want in your horde> ";
	std::cin >> N;
	if (N < 1)
		return (0);
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "What do you want to name the zombies > ";
	getline(std::cin, name);
	Zombie *horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}