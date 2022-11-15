/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:18:10 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/15 14:34:49 by mapontil         ###   ########.fr       */
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
	int	n = rand() % 2;

	try
	{
		checkGradeSign(executor);
		std::cout << "VZZZZZZZZZZZZZzzzzzzzzZZZZZZZZZZZZzzzzzz...." << std::endl; 
		if (n)
			std::cout << _target << " has been robotomized" << std::endl;
		else
			std::cout << _target << " has not been robotomized /!\\ FAILURE /!\\" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << executor.getName() << " can't execute this form because: " << e.what() << std::endl;
	}
}
