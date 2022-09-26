/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:38:10 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/26 18:48:56 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"

Animal::Animal()
{
}

Animal::Animal(Animal const &f)
{

}

Animal::~Animal()
{
}

Animal	&Animal::operator=(Animal const &rhs)
{
	return (*this);
}
