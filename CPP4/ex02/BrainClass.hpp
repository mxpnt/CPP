/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrainClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:15:08 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 13:47:45 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINCLASS_HPP
# define BRAINCLASS_HPP

# include <iostream>
# include <string>

class	Brain	{
private:
protected:
	std::string	ideas[100];
public:
	Brain();
	Brain(Brain const &f);
	~Brain();

	Brain	&operator=(Brain const &rhs);

	void				setIdea(std::string const &idea);
	std::string const	getIdea(int n) const;
};

#endif
