/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:47:00 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 16:57:00 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a("Max");
	ScavTrap	b("Ploppp");

	std::cout << "\nClapTrap test:" << std::endl;
	a.attack("Zge");
	a.beRepaired(6);
	std::cout << "\nScavTrap test:" << std::endl;
	b.beRepaired(1);
	b.guardGate();
	for (int i = 0; i < 3; ++i)
		b.takeDamage(60);
	b.attack("Max");
	b.beRepaired(10);
	b.guardGate();
	return (0);
}
