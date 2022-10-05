/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateriaClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:10:15 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/03 09:29:58 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIACLASS_HPP
# define AMATERIACLASS_HPP

# include <iostream>
# include <string>

class	ICharacter;
class	AMateria	{
private:
protected:
	std::string	_type;
public:
	AMateria();
	AMateria(AMateria const &f);
	AMateria(std::string const &type);
	virtual ~AMateria();

	AMateria	&operator=(AMateria const &rhs);

	void				setType(std::string const &type);
	std::string const	&getType() const;

	virtual AMateria*	clone() = 0;
	virtual void		use(ICharacter &target) = 0;
};

#endif