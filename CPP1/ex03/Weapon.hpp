/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:38:47 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 12:59:44 by mapontil         ###   ########.fr       */
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
	std::string	&getType();
	void		setType(std::string type);
	Weapon(std::string type);
	Weapon();
	~Weapon();
};

#endif
