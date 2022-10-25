/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 09:45:47 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 09:40:47 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include "Form.hpp"

class	Form;

class	Bureaucrat	{
private:
	std::string const	_name;
	unsigned int		_grade;
public:
	Bureaucrat();
	Bureaucrat(std::string const name, unsigned int const grade);
	Bureaucrat(Bureaucrat const &f);
	~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat const &rhs);

	std::string const	getName() const;
	unsigned int		getGrade() const;
	void				gradeUp();
	void				gradeDown();
	void				signForm(Form &form);

	class	GradeTooHighException : public std::exception	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high");
			}
	};

	class	GradeTooLowException : public std::exception	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low");
			}
	};
};

std::ostream &operator<<(std::ostream &os, Bureaucrat const &obj);

#endif
