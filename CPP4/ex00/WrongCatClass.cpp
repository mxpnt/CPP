/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:47:24 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 08:54:50 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCatClass.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->type = "wrong cat";
}

WrongCat::WrongCat(WrongCat const &f)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = f;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "MIAAAAAAATCHOUM" << std::endl;
}
