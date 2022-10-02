/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CureClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:39:21 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 11:46:52 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURECLASS_HPP
# define CURECLASS_HPP

# include "AMateriaClass.hpp"

class	Cure : public AMateria	{
private:
public:
	Cure();
	Cure(Cure const &f);
	~Cure();

	Cure	&operator=(Cure const &rhs);

	Cure	*clone();
	void	use(ICharacter &target);
};

#endif
