/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:34:22 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/10 13:54:12 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	_brain = new Brain;
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "miau" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	_brain = new Brain(*(other._brain));
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*(other._brain));
	}
	std::cout << "Cat copy assignment operator called" << std::endl;
	return (*this);
}