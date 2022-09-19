/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 10:32:46 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/19 20:10:27 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phone.hpp"

int main(int argc, char **argv)
{
	Phonebook	phonebook;
	std::string	str;
	int			nb_contact;

	if (argc == 1)
	{
		nb_contact = 0;
		while (1)
		{
			std::cout << "ENTER COMMAND :" << std::endl;
			std::getline(std::cin, str);
			if (str.compare("ADD") == 0)
			{
				phonebook.add_contact();
				nb_contact++;
			}
			else if (str.compare("SEARCH") == 0)
			{
				if (nb_contact == 0)
					std::cout << "/!\\ EMPTY PHONEBOOK /!\\" << std::endl;
				else
					phonebook.search(nb_contact);
			}
			else if (str.compare("EXIT") == 0)
			{
				break ;
			}
			else
				std::cout << "/!\\ INVALID COMMAND /!\\" << std::endl;
			if (nb_contact == 8)
				nb_contact = 0;
			std::cout << phonebook.get_contact_n() << std::endl;
		}
	}
    return (0);
}
