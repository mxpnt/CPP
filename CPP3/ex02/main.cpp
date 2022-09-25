/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:47:00 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 17:04:33 by mapontil         ###   ########.fr       */
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

	a.attack("Zge");
	a.beRepaired(6);
	b.attack(a._name);
	a.beRepaired(10);
	b.guardGate();
	c.attack("frago");
	c.highFivesGuys();
	c.takeDamage(10000);
	c.highFivesGuys();
	c.beRepaired(100);
	return (0);
}
