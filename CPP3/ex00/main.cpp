/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:47:00 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 16:30:36 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	a("Max");

	a.attack("Zge");
	a.beRepaired(16);
	for (int i = 0; i < 9; ++i)
		a.beRepaired(0);
	for (int i = 0; i < 3; ++i)
		a.takeDamage(18);
	return (0);
}
