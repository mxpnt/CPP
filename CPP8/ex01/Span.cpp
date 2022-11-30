/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:05 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/30 12:14:24 by mapontil         ###   ########.fr       */
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
	long long int		new_result;

	if (_nbElem == 0 || _nbElem == 1)
		throw NotEnoughElem();
	std::vector<int>	v(_v);
	std::sort(v.begin(), v.begin() + _nbElem);
	for (unsigned int i = 0; i < _nbElem - 1; ++i)
	{
		new_result = static_cast<long>(v.at(i)) - static_cast<long>(v.at(i + 1));
		if (new_result < 0)
			new_result *= -1;
		if (result == 0 || result > new_result)
			result = new_result;
	}
	return (result);
}

unsigned int	Span::longestSpan() const
{
	unsigned int				result = 0;
	int							max;
	int							min;

	if (_nbElem == 0 || _nbElem == 1)
		throw NotEnoughElem();
	max = *std::max_element(_v.begin(), _v.begin() + _nbElem);
	min = *std::min_element(_v.begin(), _v.begin() + _nbElem);
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

void	Span::addNNumber(int nb, unsigned int x)
{
	if (_nbElem + x > _v.capacity())
		throw TooMuchElemAdd();
	else
	{
		std::vector<int>::const_iterator	it = _v.begin();
		this->_v.erase(_v.begin() + _nbElem, _v.begin() + _nbElem + x);
		std::advance(it, _nbElem);
		this->_v.insert(it, x, nb);
		this->_nbElem += x;
	}
}
