/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:30:32 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 12:22:38 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

std::string	Intern::_name[3] = {
	"Presidential",
	"Robotomy",
	"Shrubbery"
};

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Intern::Intern()
{
}

Intern::Intern(Intern const &f)
{
	for (int i = 0; i < 3; ++i)
		this->_name[i] = f._name[i];
	*this = f;
}

Intern::~Intern()
{
}

/***** OPERATOR *****/

Intern	&Intern::operator=(Intern const &rhs)
{
	for (int i = 0; i < 3; ++i)
		this->_name[i] = rhs._name[i];
	return (*this);
}

/***** MEMBER FUNCTION *****/

Form	*Intern::makeForm(std::string const name, std::string const target)
{
	Form	*F;

	try
	{
		int	type = -1;
		for (int i = 0; i < 3; ++i)
		{
			if (name == this->_name[i])
			{
				type = i;
				break ;
			}
		}
		switch (type)
		{
			case -1:
				throw FormIncorrectType();
			case 0:
				F = new Presidential(target);
				std::cout << "Intern creates " << F->getName() << std::endl;
				break ;
			case 1:
				F = new Robotomy(target);
				std::cout << "Intern creates " << F->getName() << std::endl;
				break ;
			case 2:
				F = new Shrubbery(target);
				std::cout << "Intern creates " << F->getName() << std::endl;
				break;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "Intern can't create a new form because: " << e.what() << std::endl;
	}
	return (F);
}
