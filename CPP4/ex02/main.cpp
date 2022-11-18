/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:48:36 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/18 11:09:04 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "BrainClass.hpp"

/* Uncomment second line to test abstract class AAnimal */

int	main(void)
{
	AAnimal	*tab[10] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Cat(), new Dog(), new Dog(), new Cat()};
	// AAnimal *test = new AAnimal;
	// AAnimal test;

	std::cout << std::endl;
	for (int i = 0; i < 10; ++i)
		tab[i]->makeSound();
	std::cout << std::endl;
	for (int i = 0; i < 10; ++i)
		delete tab[i];
	std::cout << "\n********** PRINT IDEAS **********" << std::endl;

	Cat	a;
	Cat	b(a);
	
	std::cout << std::endl;
	std::cout << a.getType() << std::endl;
	std::cout << b.getType() << std::endl;
	a.addIdea("I like milk");
	a.printIdeas();
	std::cout << "----------------" << std::endl;
	b.printIdeas();
	b = a;
	std::cout << "***** COPY DONE *****" << std::endl;
	b.printIdeas();
	std::cout << std::endl;

	Dog c;
	Dog	d(c);

	std::cout << c.getType() << std::endl;
	std::cout << d.getType() << std::endl;
	c.addIdea("I like meat");
	c.printIdeas();
	std::cout << "----------------" << std::endl;
	d.printIdeas();
	d = c;
	std::cout << "***** COPY DONE *****" << std::endl;
	d.printIdeas();
	std::cout << std::endl;

	return (0);
}
