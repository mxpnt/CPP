/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:38:47 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 13:35:06 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon {
private:
	std::string	_type;
public:
	const std::string	&getType();
	void		setType(std::string type);
	Weapon(std::string type);
	~Weapon();
};

#endif
