/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CharacterClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:55:27 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 12:52:02 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTERCLASS_HPP
# define CHARACTERCLASS_HPP

# include "ICharacterClass.hpp"

class	Character : public ICharacter	{
private:
	std::string			_name;
	AMateria			*_items[4];
public:
	Character();
	Character(Character const &f);
	Character(std::string const name);
	~Character();

	Character	&operator=(Character const &rhs);

	std::string	const	&getName() const;
	void				equip(AMateria *m);
	void				unequip(int idx);
	void				use(int idx, ICharacter &target);
};

#endif
