/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:41:19 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 12:11:47 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CureClass.hpp"
#include "ICharacterClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Cure::Cure()
{
	this->_type = "cure";
}

Cure::Cure(Cure const &f)
{
	*this = f;
}

Cure::~Cure()
{
}

/***** OPERATOR *****/

Cure	&Cure::operator=(Cure const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

Cure	*Cure::clone()
{
	Cure	*clone = new Cure();

	return (clone);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
