/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalClass.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:58:45 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 09:28:45 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimalClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &f)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = f;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

/***** OPERATOR *****/

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

std::string	WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Je ne suis pas le bon animal qui parle" << std::endl;
}
