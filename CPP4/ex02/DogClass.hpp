/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:44:33 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/18 11:07:30 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOGCLASS_HPP
# define DOGCLASS_HPP

# include "AAnimalClass.hpp"
# include "BrainClass.hpp"

class	Dog : public AAnimal	{
private:
	Brain	*_brain;
public:
	Dog();
	Dog(Dog const &f);
	virtual ~Dog();

	Dog	&operator=(Dog const &rhs);

	virtual void		makeSound() const;
	void				addIdea(std::string const &idea);
	void				printIdeas() const;
};

#endif
