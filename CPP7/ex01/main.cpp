/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:30:46 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/26 14:52:47 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	std::string	tab[3] = {"a 213b", "c 3221d", "e   	324f"};
	
	for (int i = 0; i < 3; ++i)
		std::cout << tab[i] << std::endl;
	iter<std::string>(tab, 3, strmaj);
	for (int i = 0; i < 3; ++i)
		std::cout << tab[i] << std::endl;
	return (0);
}
