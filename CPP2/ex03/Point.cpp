/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 09:22:18 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 09:54:21 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

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
