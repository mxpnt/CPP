/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 13:50:33 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/20 12:29:39 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
# define PHONEBOOKCLASS_HPP

# include "phone.hpp"

class	Phonebook{
private:
		Contact			contact[8];
		int				contact_n;
public:
		int				get_contact_n(void) const;
		Contact			*get_contact(int n_contact);
		int				valid_entry(std::string str, int i) const;
		void			add_contact(void);
		void			reformat(std::string str);
		void			print_index(int index) const;
		void			search(int nb_contact);
		Phonebook();
		~Phonebook();
};

#endif
