/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:55:07 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/22 14:52:56 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl	instance;

	if (argc == 2)
	{
		instance.complain(argv[1]);
	}
	else
		std::cout << "Wrong number of argmuents" << std::endl;
	return (0);
}