/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:56:29 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/17 09:25:28 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class	ClapTrap {
private:
protected:
	std::string			_name;
	int					_hp;
	int					_energy;
	int					_ad;
public:
	
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap const &f);

	ClapTrap	&operator=(ClapTrap const & rhs);

	void		attack(const std::string &target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};

#endif
