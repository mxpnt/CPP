/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IceClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 11:23:19 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/02 11:47:06 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICECLASS_HPP
# define ICECLASS_HPP

# include "AMateriaClass.hpp"

class	Ice : public AMateria	{
private:
public:
	Ice();
	Ice(Ice const &f);
	~Ice();

	Ice	&operator=(Ice const &rhs);

	Ice		*clone();
	void	use(ICharacter &target);
};

#endif
