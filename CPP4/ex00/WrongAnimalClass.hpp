/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimalClass.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:55:12 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 08:59:32 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMALCLASS_HPP
# define WRONGANIMALCLASS_HPP

# include "AnimalClass.hpp"

class	WrongAnimal	{
private:
protected:
	std::string	type;
public:
	WrongAnimal();
	WrongAnimal(WrongAnimal const &f);
	virtual ~WrongAnimal();

	WrongAnimal	&operator=(WrongAnimal const &rhs);

	std::string		getType() const;
	void			makeSound() const;
};

#endif
