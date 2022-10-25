/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:52:07 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 10:40:39 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class	Bureaucrat;

class	Form	{
private:
	std::string const	_name;
	bool				_signed;
	size_t const		_gradeSign;
	size_t const		_gradeExec;
protected:
	void	checkGradeSign(Bureaucrat const &executor) const;
public:
	Form();
	Form(std::string const name, size_t const sign, size_t const exec);
	Form(Form const &f);
	~Form();

	Form	&operator=(Form const &rhs);

	std::string			getName() const;
	bool				getSigned() const;
	size_t				getGradeSign() const;
	size_t				getGradeExec() const;
	void				beSigned(Bureaucrat const &someone);
	virtual void		execute(Bureaucrat const &executor) const = 0;

	class	GradeTooHighException : public std::exception	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too high to signed");
			}
	};
	class	GradeTooLowException : public std::exception	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade too low to signed");
			}
	};
	class	FormNotSigned : public std::exception	{
		public:
			virtual const char* what() const throw()
			{
				return ("Form is not signed");
			}
	};
};

std::ostream &operator<<(std::ostream &os, Form const &obj);

#endif
