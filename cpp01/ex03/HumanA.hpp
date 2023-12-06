/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:47:27 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/06 13:11:58 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

using namespace std;

class HumanA
{
	public:
		HumanA(string name, Weapon& weapon);
		~HumanA();

		void	attack(void);
	private:
		Weapon& _weapon;
		string	_name;
};

#endif