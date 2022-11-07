/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:45:30 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 14:11:49 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Weapon::Weapon()
{
	this->_type = "DefaultType";
}

Weapon::Weapon(std::string type): _type(type)
{
}

Weapon::~Weapon()
{
}

/***** MEMBER FUNCTIONS *****/

const std::string	&Weapon::getType() const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
