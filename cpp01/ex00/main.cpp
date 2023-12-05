/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:07:54 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 13:51:03 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	string	input;

	cout << "Enter a name for a Zombie to be created with newZombie()> ";
	getline(std::cin, input);
	Zombie *allocated = newZombie(input);
	cout << "Enter a name for a Zombie to be created with randomChump()> ";
	getline(std::cin, input);
	randomChump(input);
	delete(allocated);
}
