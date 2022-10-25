/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:26:43 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 11:01:20 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Presidential::Presidential(): Form("Presidential", 25, 5), _target("Unknown")
{
}

Presidential::Presidential(std::string const target): Form("Presidential", 25, 5), _target(target)
{
}

Presidential::Presidential(Presidential const &f)
{
	_target = f._target;
}

Presidential::~Presidential()
{
}

/***** OPERATORS *****/

Presidential	&Presidential::operator=(Presidential const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	Presidential::execute(Bureaucrat const &executor) const
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
