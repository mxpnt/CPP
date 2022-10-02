/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:12:39 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 11:34:09 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

AMateria::AMateria()
{
}

AMateria::AMateria(AMateria const &f)
{
	*this = f;
}

AMateria::AMateria(std::string const &type): _type(type)
{
}

AMateria::~AMateria()
{
}

/***** OPERATOR *****/

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

std::string const	&AMateria::getType() const
{
	return (this->_type);
}


