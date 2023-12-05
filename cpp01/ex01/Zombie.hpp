/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:59:01 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 17:44:22 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

using namespace std;

class Zombie
{
	public:
		Zombie();
		Zombie(string str);
		~Zombie();
		
		void	announce(void);

	private:
		string	_name;
};

Zombie*	zombieHorde( int N, string name );

#endif