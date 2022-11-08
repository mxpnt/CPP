/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:48:36 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 09:01:57 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "WrongAnimalClass.hpp"
#include "WrongCatClass.hpp"

int	main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //cat sound
	j->makeSound(); //dog sound
	meta->makeSound(); //animal sound
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;

	std::cout << "\n********** WRONG ANIMAL TEST **********" << std::endl; 

	const WrongAnimal* metaw = new WrongAnimal();
	const Animal* jw = new Dog();
	const WrongAnimal* iw = new WrongCat();

	std::cout << std::endl;
	std::cout << jw->getType() << " " << std::endl;
	std::cout << iw->getType() << " " << std::endl;
	iw->makeSound(); //wrong animal sound
	jw->makeSound(); // dog sound
	metaw->makeSound(); // wrong animal sound
	std::cout << std::endl;
	delete metaw;
	delete jw;
	delete iw;

	return (0);
}
