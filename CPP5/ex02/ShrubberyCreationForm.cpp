/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:47:38 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/09 17:22:30 by mapontil         ###   ########.fr       */
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

/***** OPERATORS *****/

Shrubbery	&Shrubbery::operator=(Shrubbery const &rhs)
{
	this->_target = rhs._target;
	return (*this);
}
