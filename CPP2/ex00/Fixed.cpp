/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:20:47 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 15:41:55 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_nbBits = 8;

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

/***** OPERATOR *****/

Fixed	&Fixed::operator=(Fixed const &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = f.getRawBits();
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}
