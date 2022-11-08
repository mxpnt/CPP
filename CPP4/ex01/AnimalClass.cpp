/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:38:10 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 10:08:19 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &f)
{
	std::cout << "Animal copy construcor called" << std::endl;
	*this = f;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

/***** OPERATOR *****/

Animal	&Animal::operator=(Animal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

std::string	Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Je suis un animal qui parle" << std::endl;
}
