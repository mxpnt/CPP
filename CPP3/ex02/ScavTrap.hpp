/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:01:43 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/26 10:37:43 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap {
private:
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &f);
	~ScavTrap();

	ScavTrap	&operator=(ScavTrap const &rhs);

	void		attack(std::string  const &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	void		guardGate();
};

#endif
