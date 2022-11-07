/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 18:12:39 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 13:36:43 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
private:
	std::string	_name;
public:
	void		setName(std::string name);
	std::string	getName(void);
	void		announce(void);
	Zombie();
	~Zombie();
};

Zombie			*zombieHorde(int n, std::string name);

#endif
