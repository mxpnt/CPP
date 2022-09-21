/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:06:35 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 13:13:45 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::setWeapon(Weapon &type)
{
	this->_Weapon = &type;
}

void	HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

HumanB::HumanB(std::string name): _name(name)
{
	return ;
}

HumanB::~HumanB()
{
	return ;
}
