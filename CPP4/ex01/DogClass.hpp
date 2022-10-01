/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:44:33 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 13:46:12 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCLASS_HPP
# define DOGCLASS_HPP

# include "AnimalClass.hpp"
# include "BrainClass.hpp"

class	Dog : public Animal	{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(Dog const &f);
	~Dog();

	Dog	&operator=(Dog const &rhs);

	virtual void		makeSound() const;
	void				addIdea(std::string const &idea);
	void				printIdeas() const;
};

#endif
