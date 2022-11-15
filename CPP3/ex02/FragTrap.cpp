/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:51:49 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/15 08:56:40 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string const name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	this->_name = name;
	this->_hp = 100;
	this->_energy = 100;
	this->_ad = 30;
}

FragTrap::FragTrap(FragTrap const &f)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = f;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

/***** OPERATOR *****/

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	FragTrap::attack(std::string const &target)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing "
		<< _ad << " points of damage" << std::endl;
		this->_energy -= 1;
		std::cout << "FragTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
	else if (this->_energy < 1)
		std::cout << this->_name << " can't attack because he doesn't have enough energy" << std::endl;
	else
		std::cout << this->_name << " is dead. Impossible to attack" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	if (this->_hp > 0)
	{
		this->_hp -= amount;
		std::cout << "FragTrap " << _name << " takes " << amount << " damage" << std::endl;
		std::cout << "FragTrap " << _name << " hp is now " << _hp << std::endl;
	}
	else
		std::cout << _name << " can't take damage. He is already dead" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hp > 0)
	{
		std::cout << "FragTrap " << _name << " has " << _hp;
		this->_hp += amount;
		std::cout << " and he heals himself " << amount << " (he has now " << _hp << " hp)" << std::endl;
		this->_energy -= 1;
		std::cout << "FragTrap " << _name << " has " << _energy << " energy remaining" << std::endl;
	}
	else if (this->_energy < 1)
		std::cout << this->_name << " can't heal himself because he doesn't have enough energy" << std::endl;
	else
		std::cout << this->_name << " is dead. Impossible to heal himself" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	if (_hp > 0)
		std::cout << "FragTrap " << _name << " wants a high five !" << std::endl;
	else
		std::cout << "FragTrap " << _name << " is dead. RIP" << std::endl;
}
