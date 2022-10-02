/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:57:35 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 13:06:26 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "CharacterClass.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Character::Character(): _name("Joker")
{
	for (int i = 0; i < 4; ++i)
		_items[i] = NULL;
}

Character::Character(Character const &f)
{
	*this = f;
}

Character::Character(std::string const name): _name(name)
{
	for (int i = 0; i < 4; ++i)
		_items[i] = NULL;
}

Character::~Character()
{
	for (int i = 0; i < 4; ++i)
	{
		if (_items[i] != NULL)
			delete _items[i];
	}
}

/***** OPERATOR *****/

Character	&Character::operator=(Character const &rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; ++i)
	{
		if (this->_items[i] != NULL)
			delete this->_items[i];
		if (rhs._items[i] != NULL)
			this->_items[i] = rhs._items[i];
	}
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

std::string const	&Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4 && this->_items[i] != NULL)
		++i;
	if (i == 4)
		std::cout << "Inventory full" << std::endl;
	else
	{
		this->_items[i] = m;
		std::cout << m->getType() << " materia equipped at slot number " << i << std::endl;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4 && this->_items[idx] != NULL)
		this->_items[idx] = NULL;
}

void	Character::use(int idx, ICharacter &target)
{

}
