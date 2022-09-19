/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:51:07 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/18 18:31:18 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

void	Contact::set_fname(std::string const &fname)
{
	this->fname = fname;	
}

std::string	Contact::get_fname(void) const
{
	return (this->fname);
}

void	Contact::set_lname(std::string const &lname)
{
	this->lname = lname;	
}

std::string	Contact::get_lname(void) const
{
	return (this->lname);
}

void	Contact::set_nname(std::string const &nname)
{
	this->nname = nname;	
}

std::string	Contact::get_nname(void) const
{
	return (this->nname);
}

void	Contact::set_pnumber(std::string const &pnumber)
{
	this->pnumber = pnumber;	
}

std::string	Contact::get_pnumber(void) const
{
	return (this->pnumber);
}

void	Contact::set_dsecret(std::string const &dsecret)
{
	this->dsecret = dsecret;	
}

std::string	Contact::get_dsecret(void) const
{
	return (this->dsecret);
}

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}
