/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:02:23 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/28 17:18:14 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <cctype>

void	print_mod_two(int const &n)
{
	std::cout << n % 2 << std::endl;
}

void	print_toupper(std::string const &str)
{
	int	i = 0;
	while (str[i])
		std::cout << static_cast<char>(toupper(str[i++]));
	std::cout << std::endl;
}

int	main(void)
{
	int array[] = {1, 2, 99, 100, -9};

    ::iter(array, 5, print_mod_two);

    std::string strings[] = {"hello", "42", "world"};

    ::iter(strings, 3, print_toupper);
}