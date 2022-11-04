/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:48:57 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/02 19:19:53 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <stack>

template <typename T>
class	MutantStack: public std::stack<T> {
public:
	MutantStack(): std::stack<T>() {};
	MutantStack(MutantStack const &f) {*this = f;};
	~MutantStack() {};

	using	std::stack<T>::operator=;

	typedef typename MutantStack::container_type::iterator iterator;

	iterator	begin() {
		return (this->c.begin());
	}
	iterator	end() {
		return (this->c.end());
	}
};


#endif
