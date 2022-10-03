/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:20:54 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/03 08:55:25 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSourceClass.hpp"
#include "IceClass.hpp"
#include "CureClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		_items[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const &f)
{
	*this = f;
}

MateriaSource::~MateriaSource()
{
}

/***** OPERATOR *****/

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	MateriaSource::learnMateria(AMateria *am)
{
	int	i;

	i = 0;
	while (i < 4 && this->_items[i] != NULL)
		++i;
	if (i == 4)
		std::cout << "MateriaSource's inventory is full" << std::endl;
	else
	{
		this->_items[i] = am;
		std::cout << "Materia is equipped at slot number " << i << " (MateriaSource)" << std::endl;
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	int	i;

	i = 0;
	while (this->_items[i + 1] != NULL && this->_items[i] != NULL)
		++i;
	
}
