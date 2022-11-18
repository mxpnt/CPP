/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:57:53 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/18 14:54:58 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Form::Form(): _name("DEFAULT"), _signed(false), _gradeSign(50), _gradeExec(50)
{
}

Form::Form(std::string const name, size_t const sign, size_t const exec): _name(name), _signed(false), _gradeSign(sign), _gradeExec(exec)
{
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	else if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &f): _name(f.getName()), _signed(false), _gradeSign(f.getGradeSign()), _gradeExec(f.getGradeExec())
{
	*this = f;
}

Form::~Form()
{
}

/***** OPERATORS *****/

Form	&Form::operator=(Form const &rhs)
{
	this->_signed = rhs._signed;
	return (*this);
}

std::ostream &operator<<(std::ostream &os, Form const &obj)
{
	os << obj.getName() << " is a Form." << std::endl << "Grade required to sign it is: " << obj.getGradeSign() << std::endl
	<< "Grade required to exec it is: " << obj.getGradeExec() << std::endl << "Signed: " << obj.getSigned() << std::endl;
	return (os);
}

/***** MEMBER FUNCTIONS *****/

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}

size_t	Form::getGradeSign() const
{
	return (this->_gradeSign);
}

size_t	Form::getGradeExec() const
{
	return (this->_gradeExec);
}

void	Form::beSigned(Bureaucrat const &someone)
{
	if (someone.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
	{
		_signed = true;
		std::cout << someone.getName() << " signed " << this->getName() << " form\n";
	}
}

void	Form::checkGradeSign(Bureaucrat const &executor) const
{
	if (this->getSigned() == false)
		throw Form::FormNotSigned();
	if (executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();
}
