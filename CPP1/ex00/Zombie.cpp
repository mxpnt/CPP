/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:06:28 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 13:52:31 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Zombie::Zombie()
{
	this->_name = "DefaultName";
}

Zombie::Zombie(std::string name): _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " DESTROYED" << std::endl;
}

/***** MEMBER FUNCTIONS *****/

void	Zombie::setZombieName(std::string name)
{
	this->_name = name;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
