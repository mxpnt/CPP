/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:00:49 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/15 12:56:22 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Bureaucrat::Bureaucrat()
{

}

Bureaucrat::Bureaucrat(std::string const name, unsigned int const grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &f): _name(f.getName())
{
	_grade = f._grade;
	*this = f;
}

Bureaucrat::~Bureaucrat()
{
}

/***** OPERATOR *****/

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_grade = rhs._grade;
	return (*this);
}

std::ostream	&operator<<(std::ostream &os, Bureaucrat const &obj)
{
	os << obj.getName() << ", Bureaucrat grade " << obj.getGrade() << "." << std::endl; 
	return (os);
}

/***** MEMBER FUNCTION *****/

std::string const	Bureaucrat::getName() const
{
	return (this->_name);
}

unsigned int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::gradeUp()
{
	try
	{
		if (_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::gradeDown()
{
	try
	{
		if (_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form &form)
{
	if (form.getSigned() == true)
		std::cout << form.getName() << " is already signed" << std::endl;
	else
	{
		try
		{
			form.beSigned(*this);
		}
		catch (std::exception &e)
		{
			std::cout << _name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
		}
	}
}

void	Bureaucrat::executeForm(Form const &form)
{
	form.execute(*this);
}
