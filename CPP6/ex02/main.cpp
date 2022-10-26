/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:38:02 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/26 10:59:02 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BaseClass.hpp"
#include "BaseEmptyClass.hpp"
#include <iostream>
#include <exception>
#include <time.h>

Base	*generator(void)
{
	Base	*ptr;
	time_t	timer;
	int		n;

	time(&timer);
	n = timer % 3;
	switch (n)
	{
		case 0:
			ptr = new A;
			std::cout << ptr << " : class A" << std::endl;
			break ;
		case 1:
			ptr = new B;
			std::cout << ptr << " : class B" << std::endl;
			break ;
		case 2:
			ptr = new C;
			std::cout << ptr << " : class C" << std::endl;
			break ;
	}
	return (ptr);
}

void	identify(Base *p)
{
	Base	*save;

	save = p;
	p = dynamic_cast<A*>(p);
	if (p)
		std::cout << "p point to an object of class A (pointer method)" << std::endl;
	p = save;
	p = dynamic_cast<B*>(p);
	if (p)
		std::cout << "p point to an object of class B (pointer method)" << std::endl;
	p = save;
	p = dynamic_cast<C*>(p);
	if (p)
		std::cout << "p point to an object of class C (pointer method)" << std::endl;
}

void	identify(Base &p)
{
	try	{
		p = dynamic_cast<A&>(p);
		std::cout << "p point to an object of class A (reference method)" << std::endl;
	}
	catch (std::exception &e)
	{
	}
	try	{
		p = dynamic_cast<B&>(p);
		std::cout << "p point to an object of class B (reference method)" << std::endl;
	}
	catch (std::exception &e)
	{	
	}
	try	{
		p = dynamic_cast<C&>(p);
		std::cout << "p point to an object of class C (reference method)" << std::endl;
	}
	catch (std::exception &e)
	{
	}
}

int	main(void)
{
	Base	*base = generator();

	identify(base);							/* POINTER METHOD */
	identify(*base);						/* REFERENCE METHOD */

	std::cout << base << std::endl;

	return (0);	
}
