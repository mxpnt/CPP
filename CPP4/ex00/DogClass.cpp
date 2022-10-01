/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:47:17 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 11:42:17 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "dog";
}

Dog::Dog(Dog const &f)
{
	std::cout << "Dog copy constructor called" << std::endl;
	type = f.type;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK BARK" << std::endl;
}
