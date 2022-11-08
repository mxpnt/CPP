/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimalClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:38:10 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 10:42:44 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimalClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &f)
{
	std::cout << "AAnimal copy construcor called" << std::endl;
	*this = f;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

/***** OPERATOR *****/

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

/***** MEMBER FUNCTION *****/

std::string	AAnimal::getType() const
{
	return (this->type);
}
