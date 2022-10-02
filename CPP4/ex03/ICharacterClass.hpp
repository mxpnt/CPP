/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacterClass.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:47:32 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 12:46:02 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTERCLASS_HPP
# define ICHARACTERCLASS_HPP

# include "AMateriaClass.hpp"

class	AMateria;

class	ICharacter	{
public:
	virtual						~ICharacter();
	virtual	std::string const	&getName() const = 0;
	virtual void				equip(AMateria *m) = 0;
	virtual void				unequip(int idx) = 0;
	virtual void				use(int idx, ICharacter&target) = 0;
};

#endif
