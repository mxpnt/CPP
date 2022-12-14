/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:15:26 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/01 14:52:59 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class	Fixed {
private:
	int					_value;
	static const int	_nbBits;
public:
	Fixed();
	Fixed(const Fixed &f);
	~Fixed();

	Fixed & operator=(Fixed const & f);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
};

#endif
