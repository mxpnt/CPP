/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:47:38 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 12:33:27 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Shrubbery::Shrubbery(): Form("Shrubbery", 145, 137), _target("Unknown")
{
}

Shrubbery::Shrubbery(std::string const target): Form("Shrubbery", 145, 137), _target(target)
{
}

Shrubbery::Shrubbery(Shrubbery const &f)
{
	_target = f._target;
}

Shrubbery::~Shrubbery()
{
}

/***** OPERATORS *****/

Shrubbery	&Shrubbery::operator=(Shrubbery const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	Shrubbery::execute(Bureaucrat const &executor) const
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
