/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:00:18 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/06 13:22:13 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

using namespace std;

class HumanB
{
	public:
		HumanB(string name);
		~HumanB();

		void	attack(void);
		void	setWeapon(Weapon &weapon);
	private:
		Weapon*	_weapon;
		string	_name;
};

#endif