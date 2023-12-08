/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:54:26 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 14:11:50 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl karen;
	
	std::cout << "Calling Harl.complain(DEBUG):" << std::endl;
	karen.complain("DEBUG");

	std::cout << "\nCalling Harl.complain(INFO):" << std::endl;
	karen.complain("INFO");

	std::cout << "\nCalling Harl.complain(WARNING):" << std::endl;
	karen.complain("WARNING");

	std::cout << "\nCalling Harl.complain(ERROR):" << std::endl;
	karen.complain("ERROR");
}