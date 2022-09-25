/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 10:47:00 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 16:23:29 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap	a("Max");
	ScavTrap	b("Ploppp");

	a.attack("Zge");
	a.beRepaired(6);
	b.attack(a._name);
	a.beRepaired(10);
	return (0);
}
