/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:48:36 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 10:49:12 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "BrainClass.hpp"

/* Uncomment second line to test abstract class AAnimal */

int	main(void)
{
	AAnimal	*tab[10] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Cat(), new Dog(), new Dog(), new Cat()};
	// AAnimal	*peg = new AAnimal();

	for (int i = 0; i < 10; ++i)
		tab[i]->makeSound();
	for (int i = 0; i < 10; ++i)
		delete tab[i];

	Cat	a;
	Cat	b(a);
	
	a.addIdea("I like milk");
	a.printIdeas();
	std::cout << "----------------" << std::endl;
	b.printIdeas();

	std::cout << a.getType() << std::endl;
	std::cout << b.getType() << std::endl;

	Dog c;
	Dog	d(c);

	c.addIdea("I like meat");
	c.printIdeas();
	std::cout << "----------------" << std::endl;
	d.printIdeas();

	std::cout << c.getType() << std::endl;
	std::cout << d.getType() << std::endl;

	return (0);
}
