/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:14:02 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/29 14:27:16 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span sp = Span(6);

	try {
		sp.addNumber(6);
		sp.addNumber(-2147483648);
		sp.addNumber(2147483647);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(13);
		std::cout << sp.longestSpan() << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	sp.print();
	std::cout << "**************************" << std::endl;

	Span sp2 = Span(10000);

	try {
		sp2.addNNumber(4, 9950);
		sp2.addNNumber(6, 3);
		std::cout << sp2.longestSpan() << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
		// sp2.print();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "**************************" << std::endl;

	Span sp3 = Span(10);

	try {
		std::cout << sp3.longestSpan() << std::endl;
		std::cout << sp3.shortestSpan() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
