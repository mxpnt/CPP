/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:41:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 13:05:26 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaClass.hpp"
#include "CureClass.hpp"
#include "IceClass.hpp"
#include "ICharacterClass.hpp"
#include "CharacterClass.hpp"

int	main(void)
{
	AMateria	*a = new Ice();

	std::cout << a->getType() << std::endl;
	// std::cout << b.getType() << std::endl;

	Cure c;
	Cure d(c);

	std::cout << c.getType() << std::endl;
	std::cout << d.getType() << std::endl;

	ICharacter *z = new Character();

	std::cout << z->getName() << std::endl;
	z->equip(a);
	// Character	y = z;
	// std::cout << y.getName() << std::endl;
	// y.equip(a);

	return (0);
}
