/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:12:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/29 13:33:04 by mapontil         ###   ########.fr       */
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

class	NotFindOccur : public std::exception {
	public:
		virtual const char* what() const throw() {
			return ("No occurence found");
		}
};

template <typename T>
int	easyfind(T container, int n)
{
	typename T::const_iterator	it;
	typename T::const_iterator	ite = container.end();

	it = std::find(container.begin(), container.end(), n);
	if (it != ite)
		return (static_cast<int>(*it));
	else
		throw NotFindOccur();
}

#endif
