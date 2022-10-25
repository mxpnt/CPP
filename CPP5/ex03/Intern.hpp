/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:28:03 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 12:13:13 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <string>
# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class	Intern	{
private:
	static std::string	_name[3];
public:
	Intern();
	Intern(Intern const &f);
	~Intern();

	Intern	&operator=(Intern const &rhs);

	Form	*makeForm(std::string const name, std::string const target);

	class	FormIncorrectType : public std::exception	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form incorrect type name");
			}
	};
};

#endif