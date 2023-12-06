/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:57:03 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/06 13:17:16 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(string name, Weapon& weapon) : _weapon(weapon), _name(name)
{

}

HumanA::~HumanA()
{

}

void	HumanA::attack(void)
{
	cout << _name << " attacks with their " << _weapon.getType() << endl;
}
