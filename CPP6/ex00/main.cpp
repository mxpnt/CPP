/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:35:20 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 17:30:23 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <stdexcept>
#include <cmath>

void	convertChar(double n)
{
	std::cout << "char: ";
	if ((n > 0 && n < 33) || n == 127)
		std::cout << "Non displayable" << std::endl;
	else if (n > 127 || n > INT_MAX || n < 0 || n < INT_MIN)
		std::cout << "Impossible" << std::endl;
	else
	{
		char c = static_cast<char>(n);
		std::cout << "'" << c << "'" << std::endl;
	}
}

void	convertInt(double n)
{
	std::cout << "int: ";
	if (n < INT_MIN || n > INT_MAX)
		std::cout << "Impossible" << std::endl;
	else
	{
		int	i = static_cast<int>(n);
		std::cout << i << std::endl;
	}
}

void	convertFloat(double n)
{
	std::cout << "float: ";
	float	i = static_cast<float>(n);
	std::cout << i;
	if (fmodf(i, 1) == 0)
		std::cout << ".0";
	std::cout << "f" <<std::endl;
}

void	convertDouble(double n)
{
	std::cout << "double: ";
	std::cout << n << std::endl;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);

	double	n = std::stod(argv[1]);

	convertChar(n);
	convertInt(n);
	convertFloat(n);
	convertDouble(n);

	return (0);
}
