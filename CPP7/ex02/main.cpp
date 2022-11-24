/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:56:55 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/24 13:37:16 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	tab(6);
	Array<int>	vide;

	std::cout << vide << std::endl;
	std::cout << tab << std::endl;
	std::cout << tab.size() << std::endl;
	for (size_t i = 0; i < 6; ++i)
	{
		tab[i] = i + 1;
	}
	std::cout << tab << std::endl;
	std::cout << tab.size() << std::endl;
	try
	{
		tab[7] = 2;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "*-------------------------------*" << std::endl;

	Array<int> bat(tab);

	std::cout << bat << std::endl;
	std::cout << bat.size() << std::endl;
	for (size_t i = 0; i < 6; ++i)
	{
		bat[i] = 10 + 1;
	}
	std::cout << bat << std::endl;
	std::cout << tab << std::endl;
	return (0);
}
