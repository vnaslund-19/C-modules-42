/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:47:27 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/15 16:34:44 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Diamond");
	std::cout << std::endl;
    
	std::cout << "Calling whoAmI:" << std::endl;
	diamond.whoAmI(); // This should display both names
	std::cout << std::endl;

    // Testing the attack function (should use ScavTrap's attack)
    diamond.attack("Target");
	std::cout << std::endl;

    // Testing special functions of both parents
    diamond.FragTrap::beRepaired(20);
	std::cout << std::endl;
    diamond.ScavTrap::takeDamage(15);
	std::cout << std::endl;

    return (0);
}