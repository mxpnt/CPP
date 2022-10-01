/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AnimalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:38:10 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 15:38:25 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &f)
{
	std::cout << "Animal copy construcor called" << std::endl;
	*this = f;
}

AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal	&AAnimal::operator=(AAnimal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

std::string	AAnimal::getType() const
{
	return (this->type);
}
