/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:49:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 11:42:28 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "cat";
}

Cat::Cat(Cat const &f)
{
	std::cout << "Cat copy constructor called" << std::endl;
	type = f.type;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUU" << std::endl;
}
