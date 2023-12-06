/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:54:26 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/06 17:40:25 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl karen;
	
	cout << "Calling Harl.complain(DEBUG):" << endl;
	karen.complain("DEBUG");

	cout << "\nCalling Harl.complain(INFO):" << endl;
	karen.complain("INFO");

	cout << "\nCalling Harl.complain(WARNING):" << endl;
	karen.complain("WARNING");

	cout << "\nCalling Harl.complain(ERROR):" << endl;
	karen.complain("ERROR");
}