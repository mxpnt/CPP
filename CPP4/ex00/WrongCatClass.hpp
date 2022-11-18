/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCatClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:50:57 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/18 11:05:55 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCATCLASS_HPP
# define WRONGCATCLASS_HPP

# include "AnimalClass.hpp"
# include "WrongAnimalClass.hpp"

class	WrongCat : public WrongAnimal	{
private:
public:
	WrongCat();
	WrongCat(WrongCat const &f);
	virtual ~WrongCat();

	WrongCat	&operator=(WrongCat const &rhs);

	void		makeSound() const;
};

#endif
