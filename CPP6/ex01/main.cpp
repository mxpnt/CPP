/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:00:35 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 18:31:00 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include <cstdint>
#include <iostream>

uintptr_t	serialize(Data *ptr)
{
	uintptr_t	s = reinterpret_cast<uintptr_t>(ptr);

	return (s);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*ptr = reinterpret_cast<Data*>(raw);

	return (ptr);
}

int	main(void)
{
	Data		test;
	Data		*fal;
	uintptr_t	ptr;

	test.a = 6;
	std::cout << test.a << std::endl;
	ptr = serialize(&test);
	fal = deserialize(ptr);
	fal->a = 2;
	std::cout << fal->a << std::endl;
	std::cout << test.a << std::endl;
	return (0);
}
