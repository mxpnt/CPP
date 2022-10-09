/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:43:37 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/09 11:47:19 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	unsigned int	grade;
	std::string		name;

	std::cout << "Enter grade: ";
	std::cin >> grade;
	std::cout << "Grade enter: " << grade << std::endl;
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << "Name enter: " << name << std::endl;
	try
	{
		Bureaucrat	*first = new Bureaucrat(name, grade);
		std::cout << *first;
		delete first;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		return (1);
	}

/***********************************************************************************/

	Bureaucrat	second("Baby", grade);
	std::string	test;

	std::cout << second;
	std::cout << "Enter UP or DOWN: ";
	std::cin >> test;
	while (test != "UP" && test != "DOWN")
		std::cin >> test;
	std::cout << "Command entered: " << test << std::endl;
	if (test == "UP")
	{
		try
		{
			second.gradeUp();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	else
	{
		try
		{
			second.gradeDown();
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
