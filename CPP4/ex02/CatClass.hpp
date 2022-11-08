/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CatClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:43:15 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/08 10:42:11 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CATCLASS_HPP
# define CATCLASS_HPP

# include "AAnimalClass.hpp"
# include "BrainClass.hpp"

class	Cat : public AAnimal	{
private:
	Brain	*_brain;
public:
	Cat();
	Cat(Cat const &f);
	~Cat();

	Cat	&operator=(Cat const &rhs);

	virtual void		makeSound() const;
	void				addIdea(std::string const &idea);
	void				printIdeas() const;
};

#endif
