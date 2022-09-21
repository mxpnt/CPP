/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:06:35 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 13:37:40 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &type)
{
	this->_Weapon = &type;
}

void	HumanB::attack(void) const
{
	if (!this->_Weapon)
		std::cout << _name << " failed his attack" << std::endl;
	else 
		std::cout << _name << " attacks with their " << _Weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name): _name(name), _Weapon(NULL)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}
