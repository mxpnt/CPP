/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:14:02 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/28 15:17:00 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
	Span sp = Span(5);

	sp.addNumber(-6);
	sp.addNumber(-3);
	sp.addNumber(17);
	sp.addNumber(-9);
	sp.addNumber(-11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	return 0;
}
