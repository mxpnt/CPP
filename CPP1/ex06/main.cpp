/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 10:15:21 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/23 10:18:39 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char**argv)
{
	Harl	harlFilter;

	if (argc == 2)
	{
		harlFilter.complain(argv[1]);
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}
