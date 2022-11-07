/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:03:16 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 13:50:06 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
private:
	std::string _name;
public:
	void	setZombieName(std::string name);
	void	announce(void);
	Zombie();
	Zombie(std::string name);
	~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
