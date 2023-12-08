/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:07:54 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 13:34:42 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::string	input;

	std::cout << "Enter a name for a Zombie to be created with newZombie()> ";
	getline(std::cin, input);
	Zombie *allocated = newZombie(input);
	std::cout << "Enter a name for a Zombie to be created with randomChump()> ";
	getline(std::cin, input);
	randomChump(input);
	delete(allocated);
}
