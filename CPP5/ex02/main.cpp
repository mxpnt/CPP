/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 09:43:37 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 11:15:32 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Presidential	A("Garden");
	Bureaucrat		one("Max", 2);
	Bureaucrat		two("Jo", 21);

	A.execute(one);
	one.signForm(A);
	A.execute(one);
	return (0);
}
