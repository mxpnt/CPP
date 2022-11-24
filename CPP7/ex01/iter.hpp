/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 12:31:26 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/24 09:22:17 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	incr(T &value)
{
	value++;
}

template <typename T>
void	strmaj(T &str)
{
	for (size_t i = 0; i < str.length(); ++i)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
	}
}

template <typename T>
void	iter(T *tab, size_t size, void(*f)(T&))
{
	size_t	i = 0;

	while (i < size)
	{
		f(tab[i]);
		++i;
	}
}

#endif