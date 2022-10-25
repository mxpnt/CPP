/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:24:30 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 12:31:33 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
class	Presidential : public Form	{
private:
	std::string	_target;
public:
	Presidential();
	Presidential(std::string const target);
	Presidential(Presidential const &f);
	~Presidential();

	Presidential	&operator=(Presidential const &rhs);

	void	execute(Bureaucrat const &executor) const;
};

#endif
