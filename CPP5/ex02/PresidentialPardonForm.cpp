/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:26:43 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/09 17:30:14 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Presidential::Presidential(): Form("Presidential", 25, 5), _target("Unknown")
{
}

Presidential::Presidential(std::string const target): Form("Presidential", 25, 5), _target("Unknown")
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
