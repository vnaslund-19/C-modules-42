/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:33:56 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 18:44:30 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(string weapon)
{
	_type = weapon;
}

Weapon::~Weapon()
{
	
}

void	Weapon::setType(string type)
{
	_type = type;
}

const string&	Weapon::getType(void)
{
	return (_type);
}
