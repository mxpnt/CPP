/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:18:10 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 11:24:26 by mapontil         ###   ########.fr       */
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

/***** MEMBER FUNCTIONS *****/

void	Robotomy::execute(Bureaucrat const &executor) const
{
	try
	{
		checkGradeSign(executor);
		std::cout << executor.getName() << " executed " << this->getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << executor.getName() << " can't execute this form because: " << e.what() << std::endl;
	}
}
