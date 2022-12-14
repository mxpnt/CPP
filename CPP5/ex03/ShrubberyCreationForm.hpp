/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 13:28:13 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/15 14:32:19 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

# include <fstream>
# include <sstream>

class	Shrubbery : public Form {
private:
	std::string	_target;
public:
	Shrubbery();
	Shrubbery(std::string const target);
	Shrubbery(Shrubbery const &f);
	~Shrubbery();

	Shrubbery	&operator=(Shrubbery const &rhs);

	void	execute(Bureaucrat const &executor) const;
};

#endif
