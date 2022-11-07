/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:38:47 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 14:12:20 by mapontil         ###   ########.fr       */
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
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string	&getType() const;
	void				setType(std::string type);
};

#endif
