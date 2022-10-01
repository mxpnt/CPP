/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 11:48:36 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 14:10:35 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AnimalClass.hpp"
#include "CatClass.hpp"
#include "DogClass.hpp"
#include "BrainClass.hpp"

int	main(void)
{
	Animal	*tab[10] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Cat(), new Dog(), new Dog(), new Cat()};

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

	return (0);
}
