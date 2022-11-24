/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 14:58:01 by mapontil          #+#    #+#             */
/*   Updated: 2022/11/24 12:22:45 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>

template <typename T>
class	Array	{
private:
	T		*_tab;
	size_t	_size;
public:
	Array(){
		this->_tab = new T;
		this->_size = 0;
	};
	Array(unsigned int n){
		this->_tab = new T[n];
		for (unsigned int i = 0; i < n; ++i)
			this->_tab[i] = 0;
		this->_size = n;
	};
	Array(Array const &f){
		this->_tab = f._tab;
		this->_size = f.size();
		*this = f;
	};
	~Array(){
		if (this->_tab)
			delete [] this->_tab;
	};

	Array	&operator=(Array const &rhs){
		if (rhs.size())
		{
			this->_tab = new T[rhs.size()];
			for (size_t i = 0; i < rhs.size(); ++i)
				this->_tab[i] = rhs._tab[i];
		}
		else
			this->_tab = NULL;
		this->_size = rhs.size();
		return (*this);
	};

	T	&operator[](size_t index) const{
		if (index >= _size)
		{
			throw IndexIncorrectException();
		}
		return (this->_tab[index]);
	};

	size_t	size() const {
		return (this->_size);
	};
	
	class	IndexIncorrectException : public std::exception	{
		public:
			virtual const char* what() const throw() {
				return ("Index incorrect");
			}
	};
};

template <typename T>
std::ostream	&operator<<(std::ostream &os, Array<T> const &tab)
{
	for (size_t i = 0; i < tab.size(); ++i)
		os << tab[i] << " | ";
	return (os);
}

#endif
