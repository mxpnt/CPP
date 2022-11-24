/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:24:36 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/24 13:29:31 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

int	main(void)
{
	int	a = 2;
	int	b = 5;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min: " << min<int>(a, b) << std::endl;
	std::cout << "max: " << max<int>(a, b) << std::endl;
	swap<int>(a, b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min: " << min<int>(a, b) << std::endl;
	std::cout << "max: " << max<int>(a, b) << std::endl;
	std::cout << "*------------------------------*" << std::endl;

	float	c = 2.12;
	float	d = 4.14;

	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "min: " << min<float>(c, d) << std::endl;
	std::cout << "max: " << max<float>(c, d) << std::endl;
	swap<float>(c, d);
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "min: " << min<float>(c, d) << std::endl;
	std::cout << "max: " << max<float>(c, d) << std::endl;
	std::cout << "*------------------------------*" << std::endl;

	char	e = 'm';
	char	f = 'p';

	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "min: " << min<char>(e, f) << std::endl;
	std::cout << "max: " << max<char>(e, f) << std::endl;
	swap<char>(e, f);
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "min: " << min<char>(e, f) << std::endl;
	std::cout << "max: " << max<char>(e, f) << std::endl;

	return (0);
}

// int main( void ) {
// int a = 2;
// int b = 3;
// ::swap( a, b );
// std::cout << "a = " << a << ", b = " << b << std::endl;
// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
// std::string c = "chaine1";
// std::string d = "chaine2";
// ::swap(c, d);
// std::cout << "c = " << c << ", d = " << d << std::endl;
// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
// return(0);
// }