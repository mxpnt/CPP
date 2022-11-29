/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 17:12:04 by mapontil          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/11/29 08:14:19 by mapontil         ###   ########.fr       */
=======
/*   Updated: 2022/11/24 18:32:41 by mapontil         ###   ########.fr       */
>>>>>>> 3644e75539feef1b24f35256e6944d03e6c86536
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
	if (std::any_of(container.begin(), container.end(), ))
		return (static_cast<int>(*it));
	else
		throw NotFindOccur();
}

#endif
