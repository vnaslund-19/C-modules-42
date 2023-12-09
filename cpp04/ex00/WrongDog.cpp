/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongDog.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:29:42 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/09 18:24:47 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
	type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

WrongDog::~WrongDog(void)
{
	std::cout << "Dog destructor called" << std::endl;
}

void	WrongDog::makeSound(void) const
{
	std::cout << "woof" << std::endl;
}
