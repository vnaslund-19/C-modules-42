/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:08:13 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 13:40:36 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(string str)
{
	_name = str;
}

Zombie::~Zombie()
{
	cout << "Destructor: Destroying " << _name << endl;
}

void	Zombie::announce(void)
{
	cout << _name << ": BraiiiiiiinnnzzzZ..." << endl;
}