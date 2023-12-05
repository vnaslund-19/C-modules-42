/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 14:52:13 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 18:26:47 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int	N;
	string	name;
	
	cout << "How many zombies do you want in your horde> ";
	cin >> N;
	if (N < 1)
		return (0);
	std::cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "What do you want to name the zombies > ";
	getline(cin, name);
	Zombie *horde = zombieHorde(N, name);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
}