/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:49:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/26 18:50:09 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat()
{
}

Cat::Cat(Cat const &f)
{
}

Cat::~Cat()
{
}

Cat	&Cat::operator=(Cat const &rhs)
{
	return (*this);
}
