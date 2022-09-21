/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:45:30 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 13:04:08 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string	&Weapon::getType()
{
	std::string	&str = _type;

	return (str);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}
