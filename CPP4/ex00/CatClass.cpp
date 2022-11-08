/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:49:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 09:27:05 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat const &f)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = f;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

/***** OPERATOR *****/

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

/***** MEMBER FUNCTION *****/

void	Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUU" << std::endl;
}
