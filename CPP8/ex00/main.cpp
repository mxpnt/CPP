/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:11:48 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/27 18:40:11 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int	main(void)
{
	std::list<int>	lst1;

	lst1.push_back(3);
	lst1.push_back(12);
	lst1.push_back(14);
	lst1.push_back(6);
	
	try {
		int result = easyfind(lst1, 4);
		std::cout << result << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
