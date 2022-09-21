/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:53:42 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 13:12:58 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::setWeapon(Weapon type)
{
	this->_Weapon = &type;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with their " << this->_Weapon->getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &type): _name(name) ,_Weapon(&type)
{
	return ;
}

HumanA::~HumanA()
{
	return ;
}
