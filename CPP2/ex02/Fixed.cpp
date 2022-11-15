/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:51:06 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/15 16:05:44 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const	Fixed::_nbBits = 8;

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Fixed::Fixed()
{
	// std::cout << "Default constructor called" << std::endl;
	_value = 0;
}

Fixed::Fixed(const int value)
{
	// std::cout << "Int constructor called" << std::endl;
	_value = value << _nbBits;
}

Fixed::Fixed(const float value)
{
	// std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(value * (1 << _nbBits));
}

Fixed::Fixed(const Fixed &f)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

/***** OPERATORS *****/

Fixed	&Fixed::operator=(Fixed const &f)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_value = f._value;
	return (*this);
}


std::ostream	&operator<<(std::ostream &os,Fixed const &obj)
{
	os << obj.toFloat();
	return os;
}

/***** MEMBER FUNCTIONS *****/

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_value / (1 << this->_nbBits));
}

int	Fixed::toInt(void) const
{
	return (this->_value >> this->_nbBits);
}

/***** COMPARISON OPERATORS *****/

bool	Fixed::operator > (Fixed const &f) const
{
	if (this->_value > f._value)
		return (true);
	return (false);
}

bool	Fixed::operator < (Fixed const &f) const
{
	if (this->_value < f._value)
		return (true);
	return (false);
}

bool	Fixed::operator >= (Fixed const &f) const
{
	if (this->_value >= f._value)
		return (true);
	return (false);
}

bool	Fixed::operator <= (Fixed const &f) const
{
	if (this->_value <= f._value)
		return (true);
	return (false);
}

bool	Fixed::operator == (Fixed const &f) const
{
	if (this->_value == f._value)
		return (true);
	return (false);
}

bool	Fixed::operator != (Fixed const &f) const
{
	if (this->_value != f._value)
		return (true);
	return (false);
}

/***** ARITHMETIC OPERATORS *****/

Fixed	Fixed::operator + (Fixed const &f)
{
	return (Fixed(this->toFloat() + f.toFloat()));
}

Fixed	Fixed::operator - (Fixed const &f)
{
	return (Fixed(this->toFloat() - f.toFloat()));
}

Fixed	Fixed::operator * (Fixed const &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator / (Fixed const &f)
{
	return (Fixed(this->toFloat() / f.toFloat()));
}

/***** INCREMENT & DECREMENT OPERATORS *****/

Fixed	Fixed::operator ++ ()
{
	Fixed	tmp;
	
	tmp._value = ++_value;
	return (tmp);
}

Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp = *this;

	++*this;
	return (tmp);
}

Fixed	Fixed::operator -- ()
{
	Fixed	tmp;

	tmp._value = --tmp._value;
	return (tmp);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	tmp;

	tmp._value = tmp._value--;
	return (tmp);
}

/***** MIN & MAX FUNCTION *****/

Fixed const	&Fixed::max(Fixed const &f, Fixed const &j)
{
	if (f._value > j._value)
		return (f);
	return (j);
}

Fixed	&Fixed::max(Fixed &f, Fixed &j)
{
	if (f._value > j._value)
		return (f);
	return (j);
}

Fixed const	&Fixed::min(Fixed const &f, Fixed const &j)
{
	if (f._value < j._value)
		return (f);
	return (j);
}

Fixed	&Fixed::min(Fixed &f, Fixed &j)
{
	if (f._value < j._value)
		return (f);
	return (j);
}
