/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:47:17 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 10:37:01 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DogClass.hpp"

/***** CONTRUCTORS AND DESTRUCTOR *****/

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "dog";
	this->_brain = new Brain();
	this->_brain->setIdea("BONE BONE BONE");
}

Dog::Dog(Dog const &f)
{
	std::cout << "Dog copy constructor called" << std::endl;
	_brain = new Brain();
	*this = f;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

/***** OPERATOR *****/

Dog	&Dog::operator=(Dog const &rhs)
{
	this->type = rhs.type;
	*this->_brain = *rhs._brain;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	Dog::makeSound() const
{
	std::cout << "BARK BARK BARK" << std::endl;
}

void	Dog::addIdea(std::string const &idea)
{
	this->_brain->setIdea(idea);
}

void	Dog::printIdeas() const
{
	int	i;

	i = 0;
	while (this->_brain->getIdea(i) != "" && i < 100)
	{
		std::cout << "\"" << this->_brain->getIdea(i) << "\"" << " is my idea number " << i << std::endl;
		++i;
	}
}
