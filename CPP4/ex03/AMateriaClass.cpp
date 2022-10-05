/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:12:39 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/03 09:30:37 by mapontil         ###   ########.fr       */
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

void	AMateria::setType(std::string const &type)
{
	this->_type = type;
}

std::string const	&AMateria::getType() const
{
	return (this->_type);
}


