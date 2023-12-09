/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:34:22 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/09 18:22:39 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "miau" << std::endl;
}
