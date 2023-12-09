/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:35:25 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/09 18:33:23 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "\nSame code for WrongAnimal class:" 
			  << "\nAnimal, Cat and Dog will make the same noise because of missing virtual keyword\n" << std::endl;

	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongDog();
	const WrongAnimal* i2 = new WrongCat();

	std::cout << j2->getType() << " " << std::endl;
	std::cout << i2->getType() << " " << std::endl;
	i2->makeSound(); //will NOT output the cat sound!
	j2->makeSound();
	meta2->makeSound();
	delete meta2;
	delete j2;
	delete i2;

	return 0;
}
