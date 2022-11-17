/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:03:56 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/17 09:25:46 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_name = "DefaultName";
	this->_hp = 100;
	this->_energy = 50;
	this->_ad = 20;
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
}

/***** OPERATOR *****/

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

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

void	ScavTrap::guardGate()
{
	if (_hp > 0)
		std::cout << "ScavTrap " << _name << " enters Guard Gate mode" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is dead :(" << std::endl;
}
