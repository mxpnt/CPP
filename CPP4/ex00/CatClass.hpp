/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:43:15 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 10:58:25 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_HPP
# define CATCLASS_HPP

# include "AnimalClass.hpp"

class	Cat : public Animal	{
private:
public:
	Cat();
	Cat(Cat const &f);
	~Cat();

	Cat	&operator=(Cat const &rhs);

	void		makeSound() const;
};

#endif
