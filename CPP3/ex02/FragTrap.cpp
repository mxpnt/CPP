/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:51:49 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 17:05:51 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	_name = f._name;
	_hp = f._hp;
	_energy = f._energy;
	_ad = f._energy;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hp = rhs._hp;
	this->_energy = rhs._energy;
	this->_ad = rhs._ad;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	if (_hp > 0)
		std::cout << "FragTrap " << _name << " wants a high five !" << std::endl;
	else
		std::cout << "FragTrap " << _name << " is dead. RIP" << std::endl;
}
