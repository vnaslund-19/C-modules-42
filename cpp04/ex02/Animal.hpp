/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:16:42 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/10 14:12:27 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
	public:
		Animal();
		Animal(std::string kind);
		virtual ~Animal() = 0;

		std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;

	protected:
		std::string	type;
};

#endif