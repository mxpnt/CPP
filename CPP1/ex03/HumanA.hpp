/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:54:07 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 13:12:51 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Weapon.hpp"

class	HumanA {
private:
	std::string	_name;
	Weapon		*_Weapon;
public:
	void		setWeapon(Weapon type);
	void		attack();
	HumanA(std::string name, Weapon &type);
	~HumanA();
};

#endif
