/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:15:25 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 13:42:12 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/***** CONSTRUCTOR AND DESTRUCTOR *****/

Zombie::Zombie(void)
{
	std::cout << "ZOMBIE HAS BEEN CREATED" << std::endl;
	this->_name = "DefaultName";
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " HAS BEEN EXECUTED" << std::endl;
	return ;
}

/***** MEMBER FUNCTIONS *****/

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

