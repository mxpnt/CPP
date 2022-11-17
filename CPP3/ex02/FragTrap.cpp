/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:51:49 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/17 09:29:27 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_name = "DefaultName";
	this->_hp = 100;
	this->_energy = 100;
	this->_ad = 30;
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

void	FragTrap::highFivesGuys(void)
{
	if (_hp > 0)
		std::cout << "FragTrap " << _name << " wants a high five !" << std::endl;
	else
		std::cout << "FragTrap " << _name << " is dead. RIP" << std::endl;
}
