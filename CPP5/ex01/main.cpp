/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:43:37 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 11:27:37 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	first("Max", 51);
	Form		formone("BoloForm", 60, 60);

	std::cout << first;
	std::cout << formone;

	std::cout << "*********************************" << std::endl;
	try
	{
		formone.beSigned(first);
		std::cout << formone;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	first.signForm(formone);
	std::cout << "*********************************" << std::endl;
	std::cout << formone << std::endl;
	std::cout << "*********************************" << std::endl;

	Bureaucrat	second("Titi", 20);
	Form		formsecond("ZForm", 26, 26);

	std::cout << formsecond;
	std::cout << "*********************************" << std::endl;
	try
	{
		second.signForm(formsecond);
		std::cout << formsecond;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
