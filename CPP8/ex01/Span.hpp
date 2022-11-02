/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:15:20 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/02 12:40:38 by mapontil         ###   ########.fr       */
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

	void	addNumber(int nb);
	int		shortestSpan() const;
	int		longestSpan() const;
	void	print() const;
	void	addN(int i, int n);
	void	addNNumber(int nb, int x);

	class	TooMuchElemAdd : public std::exception	{
		public:
			virtual const char* what() const throw() {
				return ("Too many int want to be added");
			}
	};
};

#endif
