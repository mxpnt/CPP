/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:01:21 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 15:54:19 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _energy(10), _ad(2)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator = (ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	ClapTrap	tmp(target);

	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
		<< _ad << " points of damage" << std::endl;
		tmp.takeDamage(this->_ad);
		this->_energy -= 1;
		std::cout << "ClapTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
	else if (this->_energy < 1)
		std::cout << this->_name << " can't attack because he doesn't have enough energy" << std::endl;
	else
		std::cout << this->_name << " is dead. Impossible to attack" << std::endl;
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
		std::cout << " and he heals himself " << amount << " (he has now " << _hp << " hp)" << std::endl;
		this->_energy -= 1;
		std::cout << "ClapTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
	else if (this->_energy < 1)
		std::cout << this->_name << " can't heal himself because he doesn't have enough energy" << std::endl;
	else
		std::cout << this->_name << " is dead. Impossible to heal himself" << std::endl;
}
