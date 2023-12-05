/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:10:57 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 13:36:55 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

using namespace std;

class Zombie
{
	public:
		Zombie(string str);
		~Zombie();
		
		void	announce(void);

	private:
		string	_name;
};

Zombie* newZombie (string name);
void	randomChump(string name);

#endif