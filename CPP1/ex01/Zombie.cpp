/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:15:25 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/20 19:02:31 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->_name = name;
}

std::string	Zombie::getName(void)
{
	return (this->_name);
}

Zombie::Zombie(void)
{
	std::cout << "ZOMBIE HAS BEEN CREATED" << std::endl;
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " HAS BEEN EXECUTED" << std::endl;
	return ;
}
