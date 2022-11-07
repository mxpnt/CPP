/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:10:58 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 13:51:58 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1("Thierry");
	Zombie *zombie2 = newZombie("Henry");

	zombie1.announce();

	zombie2->announce();
	delete zombie2;

	randomChump("Marcel");
	randomChump("Didier");
	randomChump("Poee");
	
	Zombie	def;
	
	def.announce();

	return (0);
}
