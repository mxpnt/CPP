/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:44:33 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 10:59:16 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCLASS_HPP
# define DOGCLASS_HPP

# include "AnimalClass.hpp"

class	Dog : public Animal	{
private:
public:
	Dog();
	Dog(Dog const &f);
	~Dog();

	Dog	&operator=(Dog const &rhs);

	void		makeSound() const;
};

#endif
