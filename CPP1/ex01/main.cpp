/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:46:05 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 13:46:47 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde;

	horde = zombieHorde(14, "HENRY");
	for (int i = 0; i < 14; ++i)
	{
		std::cout << "Index: " << i << std::endl;
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
