/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:12:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/27 18:38:48 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <list>
# include <exception>

// class	Exception {
// public:
	class	NotFindOccur : public std::exception {
		public:
			virtual const char* what() const throw() {
				return ("No occurence found");
			}
	};
// };

template <typename T>
int const	easyfind(T container, int n)
{
	// Excp						Epp;
	typename T::const_iterator	it = container.begin();
	typename T::const_iterator	ite = container.end();
	int							save = *container.begin();

	for (it = container.begin(); it != ite; ++it)
	{
		if (save == n)
			break ;
		save = static_cast<int>(*it);
	}
	if (save == n)
		return (save);
	else
		throw NotFindOccur();
}

#endif
