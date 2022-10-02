/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:32:13 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 12:11:12 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IceClass.hpp"
#include "ICharacterClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(Ice const &f)
{
	*this = f;
}

Ice::~Ice()
{
}

/***** OPERATOR *****/

Ice	&Ice::operator=(Ice const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

Ice	*Ice::clone()
{
	Ice	*clone = new Ice();

	return (clone);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}
