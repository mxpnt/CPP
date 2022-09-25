/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:49:08 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 16:56:56 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ScavTrap.hpp"

class	FragTrap : public ScavTrap {
private:
public:
	FragTrap();
	FragTrap(std::string const name);
	FragTrap(FragTrap const &f);
	~FragTrap();

	FragTrap	&operator=(FragTrap const &rhs);

	void		highFivesGuys(void);
};

#endif
