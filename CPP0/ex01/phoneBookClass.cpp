/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 14:35:50 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/20 12:54:29 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

int	Phonebook::get_contact_n(void) const
{
	return (this->contact_n);
}

Contact	*Phonebook::get_contact(int contact_n)
{
	return (&this->contact[contact_n]);
}

int	Phonebook::valid_entry(std::string str, int i) const
{
	if (i != 3)
	{
		for (int j = 0; str[j]; ++j)
			if (isalnum(str[j]) == 0 && str[j] != '-' && str[j] != ' ')
				return (1);
	}
	else
	{
		for (int j = 0; str[j]; ++j)
			if (isdigit(str[j]) == 0)
				return (2);
	}
	return (0);
}

void	Phonebook::add_contact(void)
{
	Contact		*new_c = this->get_contact(this->get_contact_n());
	std::string	str;
	std::string	ask[5] = {"FIRST NAME : ", "LAST NAME : ", "NICKNAME : ", "PHONE NUMBER : ", "DARKEST SECRET : "};
	
	for (int i = 0; i < 5; ++i)
	{
		std::cout << ask[i];
		std::getline(std::cin, str);
		if (this->valid_entry(str, i) == 0)
		{
			switch (i)
			{
				case 0:
					new_c->set_fname(str);
					break ;
				case 1:
					new_c->set_lname(str);
					break ;
				case 2:
					new_c->set_nname(str);
					break ;
				case 3:
					new_c->set_pnumber(str);
					break ;
				case 4:
					new_c->set_dsecret(str);
					break ;
			}
		}
		else
		{
			i = i - 1;
			std::cout << "INVALID ENTRY" << std::endl;
		}
	}
	if (this->contact_n < 7)
		this->contact_n++;
	else
		this->contact_n = 0;
}

void	Phonebook::reformat(std::string str)
{
	int	i;

	if (str.length() > 10)
	{
		str.replace(9, 1, ".");
		str.erase(10, std::string::npos);
	}
	i = 0;
	while (str[i])
	{
		std::cout << str[i];
		i++;
	}
	if (i < 10)
	{
		while (i < 10)
		{
			std::cout << " ";
			i++;
		}
	}	
	std::cout << "|";
}

void	Phonebook::print_index(int index) const
{
	Contact	tmp = this->contact[index];

	std::cout << tmp.get_fname() << std::endl;
	std::cout << tmp.get_lname() << std::endl;
	std::cout << tmp.get_nname() << std::endl;
	std::cout << tmp.get_pnumber() << std::endl;
	std::cout << tmp.get_dsecret() << std::endl;
}

void	Phonebook::search(int nb_contact)
{
	Contact		tmp;
	std::string	str;

	for (int i = 0; (i < 8 && nb_contact > 7) || (i < nb_contact && i < 8); ++i)
	{
		tmp = this->contact[i];
		std::cout << "|";
		for (int j = 0; j < 5; ++j)
		{
			switch (j)
			{
				case 0:
					this->reformat(tmp.get_fname());
					break ;
				case 1:
					this->reformat(tmp.get_lname());
					break ;
				case 2:
					this->reformat(tmp.get_nname());
					break ;
				case 3:
					this->reformat(tmp.get_pnumber());
					break ;
				case 4:
					this->reformat(tmp.get_dsecret());
					break ;
			}
		}
		std::cout << std::endl;
	}
	std::cout << "INDEX : ";
	std::getline(std::cin, str);
	if (str.compare("0") == 0 && nb_contact > 0)
		this->print_index(0);
	else if (str.compare("1") == 0 && nb_contact > 1)
		this->print_index(1);
	else if (str.compare("2") == 0 && nb_contact > 2)
		this->print_index(2);
	else if (str.compare("3") == 0 && nb_contact > 3)
		this->print_index(3);
	else if (str.compare("4") == 0 && nb_contact > 4)
		this->print_index(4);
	else if (str.compare("5") == 0 && nb_contact > 5)
		this->print_index(5);
	else if (str.compare("6") == 0 && nb_contact > 6)
		this->print_index(6);
	else if (str.compare("7") == 0 && nb_contact > 7)
		this->print_index(7);
	else
		std::cout << "INVALID ENTRY" << std::endl;
}

Phonebook::Phonebook(void)
{
	this->contact_n = 0;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}
