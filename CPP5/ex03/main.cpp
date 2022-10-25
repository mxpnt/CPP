/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:43:37 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 12:36:26 by mapontil         ###   ########.fr       */
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
	// Presidential	A("Garden");
	Bureaucrat		one("Max", 2);
	// Bureaucrat		two("Jo", 21);

	// one.executeForm(A);
	// one.signForm(A);
	// one.executeForm(A);

	Intern	A;
	Form	*ppf;
	ppf = A.makeForm("Presidential", "zgeg");

	ppf->execute(one);

	delete [] ppf;
	return (0);
}