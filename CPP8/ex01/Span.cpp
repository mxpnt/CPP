/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:18:05 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/27 21:01:17 by mapontil         ###   ########.fr       */
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
	*this = f;
}

Span::~Span()
{
}

/***** OPERATOR *****/

Span	&Span::operator=(Span const &rhs)
{
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	Span::addNumber(int nb)
{
	this->_v.push_back(nb);
}

int	Span::shortestSpan() const
{
	int	result = 0;

	std::vector<int>::const_iterator	it;
	std::vector<int>::const_iterator	ite = _v.end();
}

int	Span::longestSpan() const
{
}
