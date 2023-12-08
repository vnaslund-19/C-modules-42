/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:23:01 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 14:02:46 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon
{
	public:
		Weapon();
		Weapon(std::string weapon);
		~Weapon();

		const std::string&	getType();
		void				setType(std::string type);

	private:
		std::string	_type;
};

#endif