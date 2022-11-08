/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrainClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:16:16 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 10:36:26 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrainClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const &f)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = f;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

/***** OPERATOR *****/

Brain	&Brain::operator=(Brain const &rhs)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = rhs.ideas[i];
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	Brain::setIdea(std::string const &idea)
{
	int	i;

	i = 0;
	while (this->ideas[i] != "" && i < 100)
		++i;
	if (i < 100)
		this->ideas[i] = idea;
	else
		std::cout << "Brain is full, can't add an new idea" << std::endl;
}

std::string const	Brain::getIdea(int n) const
{
	if (n >= 0 && n < 100)
		return (this->ideas[n]);
	else
		return ("");
}
