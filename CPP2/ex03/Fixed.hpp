/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 11:45:20 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/25 09:19:24 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <math.h>

class	Fixed {
private:
	int					_value;
	static const int	_nbBits;
public:
	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed &f);
	~Fixed();

	Fixed &operator = (Fixed const &f);

	int					getRawBits(void) const;
	void				setRawBits(int const raw);
	float				toFloat(void) const;
	int					toInt(void) const;

	bool	operator > (Fixed const &f) const;
	bool	operator < (Fixed const &f) const;
	bool	operator >= (Fixed const &f) const;
	bool	operator <= (Fixed const &f) const;
	bool	operator == (Fixed const &f) const;
	bool	operator != (Fixed const &f) const;

	Fixed	operator + (Fixed const &f);
	Fixed	operator - (Fixed const &f);
	Fixed	operator * (Fixed const &f);
	Fixed	operator / (Fixed const &f);

	Fixed	operator ++ ();
	Fixed	operator ++ (int);
	Fixed	operator -- ();
	Fixed	operator -- (int);

	static Fixed const	&max(Fixed const &f, Fixed const &j);
	static Fixed		&max(Fixed &f, Fixed &j);
	static Fixed const	&min(Fixed const &f, Fixed const &j);
	static Fixed		&min(Fixed &f, Fixed &j);
};

std::ostream	&operator<<(std::ostream &os, Fixed const &obj);

#endif
