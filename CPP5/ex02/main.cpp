/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:43:37 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/21 09:21:07 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Shrubbery		A("Garden");
	Bureaucrat		one("Max", 2);
	Bureaucrat		two("Jo", 78);

	srand(time(NULL));
	
	// one.executeForm(A);
	// one.signForm(A);
	// one.executeForm(A);
	try
	{
		Presidential	Form("TH");
		two.executeForm(Form);
		two.signForm(Form);
		std::cout << "\n";
		one.executeForm(Form);
		one.signForm(Form);
		one.executeForm(Form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "-----------------------------------\n";
	try
	{
		Robotomy	Form("Bipboop");
		two.executeForm(Form);
		two.signForm(Form);
		std::cout << "\n";
		one.executeForm(Form);
		one.signForm(Form);
		one.executeForm(Form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	std::cout << "-----------------------------------\n";
	try
	{
		Shrubbery	Form("Woooha");
		two.executeForm(Form);
		two.signForm(Form);
		std::cout << "\n";
		one.executeForm(Form);
		one.signForm(Form);
		one.executeForm(Form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return (0);
}
