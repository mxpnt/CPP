/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:49:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 10:49:45 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CatClass.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->type = "cat";
	this->_brain = new Brain();
	this->_brain->setIdea("FISH FISH FISH");
}

Cat::Cat(Cat const &f)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this = f;
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->type = rhs.type;
	*this->_brain = *rhs._brain;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "MIAOUUUUUUU" << std::endl;
}

void	Cat::addIdea(std::string const &idea)
{
	this->_brain->setIdea(idea);
}

void	Cat::printIdeas() const
{
	int	i;

	i = 0;
	while (this->_brain->getIdea(i) != "" && i < 100)
	{
		std::cout << "\"" << this->_brain->getIdea(i) << "\"" << " is my idea number " << i << std::endl;
		++i;
	}
}
