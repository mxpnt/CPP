/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:01:21 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 11:04:21 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const name): _name(name), _hp(10), _energy(10), _ad(2)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	ClapTrap::attack(const std::string &target)
{
	ClapTrap	tmp(target);

	if (tmp._energy > 0 && tmp._hp > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _ad << " points of damage" << std::endl;
		tmp.takeDamage(this->_ad);
		this->_energy -= 1;
		std::cout << "ClapTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hp -= amount;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage" << std::endl;
	std::cout << "ClapTrap " << _name << " hp is now " << _hp << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hp)
	{
		std::cout << "ClapTrap " << _name << " has " << _hp;
		this->_hp += amount;
		std::cout << " and healing him to " << _hp << " (+" << amount << ")" << std::endl;
		this->_energy -= 1;
		std::cout << "ClapTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
}
