/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:35:25 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/10 13:55:07 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Dog *og = new Dog;
	std::cout << "\nRunning\n" << std::endl;
	Dog copy = *og;
	std::cout << "\nRunning\n" << std::endl;
	delete og;
	std::cout << "\nRunning\n" << std::endl;
}
