/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:14:02 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/29 08:56:29 by mapontil         ###   ########.fr       */
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
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << sp.longestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	sp.print();
	std::cout << "**************************" << std::endl;

	Span sp2 = Span(10000);

	try {
		sp2.addNNumber(4, 10000);
		// sp2.print();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}
