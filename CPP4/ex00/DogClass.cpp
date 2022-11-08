/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:47:17 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 09:27:52 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "dog";
}

Dog::Dog(Dog const &f)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = f;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

/***** OPERATOR *****/

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

/***** MEMBER FUNCTION *****/

void	Dog::makeSound() const
{
	std::cout << "BARK BARK BARK" << std::endl;
}
