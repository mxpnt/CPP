/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:12:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/24 18:32:41 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <list>
# include <vector>
# include <exception>
# include <algorithm>

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
int	easyfind(T container, int n)
{
	// typename T::const_iterator	it = std::find_if(container.begin(), container.end(), static_cast<int>(*it) == n);
	// typename T::const_iterator	ite = container.end();
	// int	save = *container.begin();


	// for (it = container.begin(); it != ite; ++it)
	// {
	// 	if (static_cast<int>(*it) == n)
	// 		break ;
	// 	// save = static_cast<int>(*it);
	// }
	if (std::any_of(container.begin(), container.end(), ))
		return (static_cast<int>(*it));
	else
		throw NotFindOccur();
}

#endif
