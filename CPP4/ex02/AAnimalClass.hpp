/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimalClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:35:09 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 10:42:00 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMALCLASS_HPP
# define AANIMALCLASS_HPP

# include <iostream>
# include <string>

class	AAnimal	{
private:
protected:
	std::string	type;
public:
	AAnimal();
	AAnimal(AAnimal const &f);
	virtual ~AAnimal();

	AAnimal	&operator=(AAnimal const &rhs);

	std::string		getType() const;
	virtual void	makeSound() const = 0;
};

#endif
