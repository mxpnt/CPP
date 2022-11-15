/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:43:37 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/15 14:47:05 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Form	*ppf[3];

	srand(time(NULL));

	try
	{
		Bureaucrat		one("Max", 5);
		Intern	A;

		ppf[0] = A.makeForm("Presidential", "zowi");
		ppf[1] = A.makeForm("Robotomy", "mopi");
		ppf[2] = A.makeForm("Shrubbery", "maresque");
		one.signForm(*ppf[0]);
		one.signForm(*ppf[1]);
		one.signForm(*ppf[2]);
		ppf[0]->execute(one);
		ppf[1]->execute(one);
		ppf[2]->execute(one);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	for (int i = 0; i < 3; ++i)
		delete ppf[i];
	return (0);
}
