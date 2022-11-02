/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:05 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/02 12:42:09 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Span::Span()
{
	this->_nbElem = 0;
}

Span::Span(unsigned int n)
{
	this->_v.resize(n);
	this->_nbElem = 0;
}

Span::Span(Span const &f)
{
	this->_v = f._v;
	this->_nbElem = f._nbElem;
	*this = f;
}

Span::~Span()
{
}

/***** OPERATOR *****/

Span	&Span::operator=(Span const &rhs)
{
	this->_v = rhs._v;
	this->_nbElem = rhs._nbElem;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	Span::addNumber(int nb)
{
	static size_t	i = 0;
	
	if (i < _v.capacity())
	{
		_v.at(i) = nb;
		++i;
		this->_nbElem++;
	}
	else
		throw TooMuchElemAdd();
}

int	Span::shortestSpan() const
{
	int		result = 0;
	int		new_result = 0;
	int		value = 0;
	int		next_value = 0;
	int		max = 0;
	int		min = 0;

	// std::cout << "Size: " << _v.size();
	for (size_t i = 0; i < _nbElem; ++i)
	{
		value = _v.at(i);
		// std::cout << " | i: " << i << " | Value: " << value; 
		for (size_t j = i + 1; j < _nbElem; ++j)
		{
			next_value = _v.at(j);
			// std::cout << " | j: " << j << " | next_value: " << next_value << std::endl;
			max = std::max(value, next_value);
			min = std::min(value, next_value);
			if (max < 0)
				new_result = ((max * -1) + min) * -1;
			else
				new_result = max - min;
			if (result == 0 || result > new_result)
				result = new_result;
		}
	}
	return (result);
}

int	Span::longestSpan() const
{
	int				result = 0;
	int				max = 0;
	int				min = 0;
	unsigned int	i = 0;

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = _v.end();

	for (it = _v.begin(); it != ite && i < _nbElem; ++it)
	{
		if (max == 0 || max < static_cast<int>(*it))
			max = static_cast<int>(*it);
		if (min == 0 || min > static_cast<int>(*it))
			min = static_cast<int>(*it);
		++i;
	}
	if (max < 0)
		result = ((max * -1) + min) * -1;
	else
		result = max - min;
	return (result);
}

void	spaceFunction(int i)
{
  std::cout << ' ' << i;
}

void	Span::print() const
{
	std::for_each(_v.begin(), _v.end(), spaceFunction);
}

void	Span::addN(int i, int n)
{
	_v.at(i) = n;
}

void	Span::addNNumber(int nb, int x)
{
	if (_nbElem + x > _v.capacity())
		throw TooMuchElemAdd();
	else
	{
		for (int i = 0; i < x; ++i)
		{
			this->_v.at(_nbElem) = nb;
			this->_nbElem++;
		}
	}
}
