/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:18:10 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/09 17:24:09 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Robotomy::Robotomy(): Form("Robotomy", 72, 45), _target("Unknown")
{
}

Robotomy::Robotomy(std::string const target): Form("Robotomy", 72, 45), _target(target)
{
}

Robotomy::Robotomy(Robotomy const &f)
{
	_target = f._target;
}

Robotomy::~Robotomy()
{
}

/***** OPERATORS *****/

Robotomy	&Robotomy::operator=(Robotomy const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}
