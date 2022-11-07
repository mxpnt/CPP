/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:22:18 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/07 16:08:32 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

Point::Point(): x(0), y(0)
{
	return ;
}

Point::Point(Point const &f): x(f.x), y(f.y)
{
	return ;
}

Point::~Point()
{
	return ;
}
