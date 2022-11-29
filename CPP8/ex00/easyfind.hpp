/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:12:04 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/29 08:14:19 by mapontil         ###   ########.fr       */
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


bool	equal()
{

}

template <typename T>
int	easyfind(T container, int n)
{
	typename T::const_iterator	it = container.begin();
	typename T::const_iterator	ite = container.end();
	// // int	save = *container.begin();


	// for (it = container.begin(); it != ite; ++it)
	// {
	// 	if (static_cast<int>(*it) == n)
	// 		break ;
	// 	// save = static_cast<int>(*it);
	// }
	// if (it != ite && static_cast<int>(*it) == n)
	// 	return (static_cast<int>(*it));
	// else
	// 	throw NotFindOccur();
	if (std::any_of(it, ite, equal))
	{
		
	}

}

#endif
