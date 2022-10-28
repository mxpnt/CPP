/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:05 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/28 15:17:42 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Span::Span()
{
}

Span::Span(unsigned int n)
{
	this->_v.resize(n);
}

Span::Span(Span const &f)
{
	this->_v = f._v;
	*this = f;
}

Span::~Span()
{
}

/***** OPERATOR *****/

Span	&Span::operator=(Span const &rhs)
{
	this->_v = rhs._v;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	Span::addNumber(int nb)
{
	static size_t	i = 0;
	
	if (i < _v.size())
	{
		_v.at(i) = nb;
		++i;
	}
}

int	Span::shortestSpan() const
{
	int		result = 0;
	int		new_result = 0;
	int		value = 0;
	int		next_value = 0;
	int		max = 0;
	int		min = 0;

	for (size_t i = 0; i < _v.size(); ++i)
	{
		value = _v.at(i);
		for (size_t j = i + 1; j < _v.size(); ++j)
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

int	Span::longestSpan() const
{
	int	result = 0;
	int	max = 0;
	int	min = 0;

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = _v.end();

	for (it = _v.begin(); it != ite; ++it)
	{
		if (max == 0 || max < static_cast<int>(*it))
			max = static_cast<int>(*it);
		if (min == 0 || min > static_cast<int>(*it))
			min = static_cast<int>(*it);
	}
	if (max < 0)
		result = ((max * -1) + min) * -1;
	else
		result = max - min;
	return (result);
}
