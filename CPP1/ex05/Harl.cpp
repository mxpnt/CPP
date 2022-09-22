/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 13:52:19 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/22 14:47:58 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::_debug(void)
{
	std::cout << "I love having extra bacon for my "
	<< "7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void	Harl::_info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl;
}

void	Harl::_warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. "
	<< "I've been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::_error(void)
{
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;	
}

std::string	Harl::mod[4] = {
	"DEBUG",
	"INFO",
	"WARNING",
	"ERROR"
};

void	Harl::complain(std::string level)
{
	for (int i = 0; i < 4; ++i)
	{
		if (level == this->mod[i])
			(this->*f[i])();
	}
}

Harl::Harl()
{
	this->f[0] = &Harl::_debug;
	this->f[1] = &Harl::_info;
	this->f[2] = &Harl::_warning;
	this->f[3] = &Harl::_error;
	return ;
}

Harl::~Harl()
{
	return ;
}
