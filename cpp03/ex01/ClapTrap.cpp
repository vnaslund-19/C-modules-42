/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 13:25:52 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/09 16:03:42 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	_name = name;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hitpoints, int energyPoints, int attackDamage)
{
	_hitPoints = hitpoints;
	_energyPoints = energyPoints;
	_attackDamage = attackDamage;
	_name = name;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!_energyPoints)
	{
		std::cout << "ClapTrap " << _name 
		<< " doesn't have enough energy points to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target
	<< ", causing " << _attackDamage << " points of damage!" << std::endl;
	_energyPoints--;
}
void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << _name << " takes "
	<< amount << " points of damage!" << std::endl;
	_hitPoints -= amount;
	if (_hitPoints < 1)
	{
		std::cout << "ClapTrap " << _name << " has died due to having "
		<< _hitPoints << " hitpoints💀" << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!_energyPoints)
	{
		std::cout << "ClapTrap " << _name 
		<< " doesn't have enough energy points to repair itself" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " repairs itself to increase it's hitpoints from "
	<< _hitPoints << " >> " << _hitPoints + amount << std::endl;
	_energyPoints--;
	_hitPoints += amount;
}
