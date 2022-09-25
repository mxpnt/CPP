/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:03:56 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 17:03:28 by mapontil         ###   ########.fr       */
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
	_name = f._name;
	_hp = f._hp;
	_energy = f._energy;
	_ad = f._ad;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	return (*this);
}

void	ScavTrap::guardGate()
{
	if (_hp > 0)
		std::cout << "ScavTrap " << _name << " is entering in his Guard Gate mod" << std::endl;
	else
		std::cout << "ScavTrap " << _name << " is dead :(" << std::endl;
}
