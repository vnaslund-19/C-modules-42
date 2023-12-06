/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:01:44 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/06 13:22:41 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(string name)
{
	_weapon = nullptr;
	_name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::attack(void)
{
	cout << _name << " attacks with their " << (*_weapon).getType() << endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}