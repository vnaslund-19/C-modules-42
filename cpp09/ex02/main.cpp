/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:32:41 by vnaslund          #+#    #+#             */
/*   Updated: 2024/02/04 16:47:21 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc == 1)
		return (EXIT_SUCCESS);
	for (int i = 1; i < argc; i++)
	{
		if (std::string(argv[i]).find_first_not_of("0123456789") != std::string::npos)
		{
			std::cerr << "Please enter only numeric characters" << std::endl;
			return (EXIT_FAILURE);
		}
	}
	
	PmergeMe	p;
	
	p.sortVector(argc, argv);
	std::cout << std::endl;
	p.sortList(argc, argv);

	return (EXIT_SUCCESS);
}