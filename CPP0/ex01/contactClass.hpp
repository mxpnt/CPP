/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 15:36:33 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/18 17:43:47 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

# include "phone.hpp"

class	Contact{
private:
		std::string	fname;
		std::string	lname;
		std::string	nname;
		std::string	pnumber;
		std::string	dsecret;
public:
		void		set_fname(std::string const &fname);
		std::string	get_fname(void) const;
		void		set_lname(std::string const &lname);
		std::string	get_lname(void) const;
		void		set_nname(std::string const &nname);
		std::string	get_nname(void) const;
		void		set_pnumber(std::string const &pnumber);
		std::string	get_pnumber(void) const;
		void		set_dsecret(std::string const &dsecret);
		std::string	get_dsecret(void) const;
		Contact();
		~Contact();
};



#endif
