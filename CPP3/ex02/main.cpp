/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:47:00 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 17:08:27 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap	a("Max");
	ScavTrap	b("Ploppp");
	FragTrap	c("Vannoooo");
	FragTrap	d(c);

	d.attack("Bluuuu");
	d.highFivesGuys();
	d.beRepaired(0);
	for (int i = 0; i < 3; ++i)
		d.takeDamage(50);
	d.attack("Bluuuu");
	d.highFivesGuys();
	d.beRepaired(1);
	return (0);
}
