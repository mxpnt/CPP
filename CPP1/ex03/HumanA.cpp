/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:53:42 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/09 09:43:34 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

/****** CONSTRUCTORS AND DESTRUCTOR *****/

HumanA::HumanA(std::string name, Weapon &type): _name(name) ,_Weapon(type)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}

/***** MEMBER FUNCTIONS *****/

void	HumanA::setWeapon(Weapon type)
{
	_Weapon = type;
}

void	HumanA::attack(void) const
{
	std::cout << this->_name << " attacks with their " << _Weapon.getType() << std::endl;
}
