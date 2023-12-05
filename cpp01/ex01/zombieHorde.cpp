/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:59:54 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/05 17:44:40 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	zombieHorde( int N, string name)
{
	Zombie* horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);

	return (horde);
}
