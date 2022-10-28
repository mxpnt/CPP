/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 20:15:20 by mapontil          #+#    #+#             */
/*   Updated: 2022/10/28 14:49:10 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>

class	Span	{
private:
	std::vector<int>	_v;
public:
	Span();
	Span(unsigned int n);
	Span(Span const &f);
	~Span();

	Span	&operator=(Span const &rhs);

	void	addNumber(int nb);
	int		shortestSpan() const;
	int		longestSpan() const;
};

#endif
