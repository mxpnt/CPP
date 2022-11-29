/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:15:20 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/29 09:12:06 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <exception>

class	Span	{
private:
	std::vector<int>	_v;
	unsigned int		_nbElem;
public:
	Span();
	Span(unsigned int n);
	Span(Span const &f);
	~Span();

	Span	&operator=(Span const &rhs);

	void			addNumber(int nb);
	unsigned int	shortestSpan() const;
	unsigned int	longestSpan() const;
	void			print() const;
	void			addN(int i, int n);
	void			addNNumber(int nb, unsigned int x);

	class	TooMuchElemAdd : public std::exception	{
		public:
			virtual const char* what() const throw() {
				return ("Too many int want to be added");
			}
	};
};

#endif
