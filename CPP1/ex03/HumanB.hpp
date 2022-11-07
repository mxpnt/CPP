/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:05:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 14:29:16 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class	HumanB {
private:
	std::string	_name;
	Weapon		*_Weapon;
public:
	HumanB(std::string name);
	~HumanB();

	void		setWeapon(Weapon &type);
	void		attack(void) const;
};

#endif
