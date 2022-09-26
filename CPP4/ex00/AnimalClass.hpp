/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 18:35:09 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/26 18:42:40 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMALCLASS_HPP
# define ANIMALCLASS_HPP

# include <iostream>
# include <string>

class	Animal	{
private:
protected:
	std::string	type;
public:
	Animal();
	Animal(Animal const &f);
	~Animal();

	Animal	&operator=(Animal const &rhs);
};

#endif
