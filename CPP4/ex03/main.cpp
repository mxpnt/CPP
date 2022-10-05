/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 12:41:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/03 10:09:52 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateriaClass.hpp"
#include "CureClass.hpp"
#include "IceClass.hpp"
#include "ICharacterClass.hpp"
#include "CharacterClass.hpp"
#include "IMateriaSourceClass.hpp"
#include "MateriaSourceClass.hpp"

// int	main(void)
// {
// 	AMateria	*a = new Ice();

// 	std::cout << a->getType() << std::endl;
// 	// std::cout << b.getType() << std::endl;

// 	Cure c;
// 	Cure d(c);

// 	std::cout << c.getType() << std::endl;
// 	std::cout << d.getType() << std::endl;

// 	ICharacter *z = new Character();

// 	std::cout << z->getName() << std::endl;
// 	z->equip(a);
// 	// Character	y = z;
// 	// std::cout << y.getName() << std::endl;
// 	// y.equip(a);

// 	return (0);
// }

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("Ice");
	me->equip(tmp);
	tmp = src->createMateria("Cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	std::cout << "ok" << std::endl;
	delete me;
	delete src;
	return 0;
}
