/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:13:27 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/25 11:18:26 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class	Robotomy : public Form	{
private:
	std::string	_target;
public:
	Robotomy();
	Robotomy(std::string const target);
	Robotomy(Robotomy const &f);
	~Robotomy();

	Robotomy	&operator=(Robotomy const &rhs);

	void	execute(Bureaucrat const &executor) const;
};

#endif
