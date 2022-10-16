/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:28:13 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/09 17:22:34 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class	Shrubbery : public Form {
private:
	std::string	_target;
public:
	Shrubbery();
	Shrubbery(std::string const target);
	Shrubbery();
	~Shrubbery();

	Shrubbery	&operator=(Shrubbery const &rhs);
};

#endif