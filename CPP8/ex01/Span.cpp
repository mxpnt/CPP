/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:05 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/29 08:54:28 by mapontil         ###   ########.fr       */
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

unsigned int	Span::shortestSpan() const
{
	unsigned int		result = 0;
	unsigned int		new_result = 0;
	long long int		value = 0;
	long long int		next_value = 0;
	long long int		max = 0;
	long long int		min = 0;

	for (size_t i = 0; i < _nbElem; ++i)
	{
		value = _v.at(i);
		for (size_t j = i + 1; j < _nbElem; ++j)
		{
			next_value = _v.at(j);
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

unsigned int	Span::longestSpan() const
{
	unsigned int				result = 0;
	long long int				max = 0;
	long long int				min = 0;
	unsigned int				i = 0;

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = _v.end();

	for (it = _v.begin(); it != ite && i < _nbElem; ++it)
	{
		if (max == 0 || max < static_cast<long long int>(*it))
			max = static_cast<long long int>(*it);
		if (min == 0 || min > static_cast<long long int>(*it))
			min = static_cast<long long int>(*it);
		++i;
	}
	std::cout << "max: " << max << " min: " << min << std::endl;
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
	std::cout << std::endl;
}

void	Span::addN(int i, int n)
{
	_v.at(i) = n;
}

void	Span::addNNumber(int nb, unsigned int x)
{
	if (_nbElem + x > _v.capacity())
		throw TooMuchElemAdd();
	else
	{
		for (unsigned int i = 0; i < x; ++i)
		{
			this->_v.at(_nbElem) = nb;
			this->_nbElem++;
		}
	}
}
