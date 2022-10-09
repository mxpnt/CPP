/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:43:37 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/09 13:20:11 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	Bureaucrat	first("Max", 51);
	Form		formone;

	std::cout << first;
	std::cout << formone;

	std::cout << "*********************************" << std::endl;
	try
	{
		formone.beSigned(first);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}


	first.signForm(formone);

	std::cout << "*********************************" << std::endl;
	std::cout << formone;

	return (0);
}
