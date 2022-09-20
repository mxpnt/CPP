/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:03:16 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/20 18:05:43 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <string>

class	Zombie {
private:
	std::string _name;
public:
	void	setZombieName(std::string name);
	void	announce(void);
	Zombie(std::string name);
	~Zombie();
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
