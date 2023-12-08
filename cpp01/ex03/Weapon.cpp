/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:33:56 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 14:03:32 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{

}

Weapon::Weapon(std::string weapon)
{
	_type = weapon;
}

Weapon::~Weapon()
{
	
}

void	Weapon::setType(std::string type)
{
	_type = type;
}

const std::string&	Weapon::getType(void)
{
	return (_type);
}
