/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSourceClass.hpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 08:17:05 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/03 08:36:26 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCECLASS_HPP
# define MATERIASOURCECLASS_HPP

# include "IMateriaSourceClass.hpp"

class	MateriaSource : public IMateriaSource	{
private:
	AMateria	*_items[4];
public:
	MateriaSource();
	MateriaSource(MateriaSource const &f);
	~MateriaSource();

	MateriaSource	&operator=(MateriaSource const &rhs);

	void			learnMateria(AMateria *am);
	AMateria		*createMateria(std::string const &type);
};

#endif
