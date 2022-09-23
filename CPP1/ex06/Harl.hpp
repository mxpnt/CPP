/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 15:06:52 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/23 10:22:43 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

class	Harl {
private:
	void				_debug(void);
	void				_info(void);
	void				_warning(void);
	void				_error(void);
	static std::string	mod[4];
public:
	void		complain(std::string level);
	Harl();
	~Harl();
};

#endif
