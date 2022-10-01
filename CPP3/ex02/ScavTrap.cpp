/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:03:56 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 14:20:19 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &f)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = f;
	// _name = f._name;
	// _hp = f._hp;
	// _energy = f._energy;
	// _ad = f._ad;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
		<< _ad << " points of damage" << std::endl;
		this->_energy -= 1;
		std::cout << "ScavTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
	else if (this->_energy < 1)
		std::cout << this->_name << " can't attack because he doesn't have enough energy" << std::endl;
	else
		std::cout << this->_name << " is dead. Impossible to attack" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		this->_hp -= amount;
		std::cout << "ScavTrap " << _name << " takes " << amount << " damage" << std::endl;
		std::cout << "ScavTrap " << _name << " hp is now " << _hp << std::endl;
	}
	else
		std::cout << _name << " can't take damage. He is already dead" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "ScavTrap " << _name << " has " << _hp;
		this->_hp += amount;
		std::cout << " and he heals himself " << amount << " (he has now " << _hp << " hp)" << std::endl;
		this->_energy -= 1;
		std::cout << "ScavTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
	else if (this->_energy < 1)
		std::cout << this->_name << " can't heal himself because he doesn't have enough energy" << std::endl;
	else
		std::cout << this->_name << " is dead. Impossible to heal himself" << std::endl;
}

void	ScavTrap::guardGate()
{
	if (_hp > 0)
		std::cout << "ScavTrap " << _name << " is entering in his Guard Gate mod" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is dead :(" << std::endl;
}
