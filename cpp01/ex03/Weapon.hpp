/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:23:01 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/06 13:11:59 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

using namespace std;

class Weapon
{
	public:
		Weapon();
		Weapon(string weapon);
		~Weapon();

		const string&	getType();
		void			setType(string type);

	private:
		string	_type;
};

#endif