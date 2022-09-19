/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:55:51 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/17 15:50:34 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
    std::string		s;
    unsigned int	j;
    int				i;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc > 1)
    {
        i = 1;
        while (argv[i])
        {
            s = argv[i];
            for (j = 0; j < s.length(); j++)
            	s[j] = std::toupper(s[j]);
            std::cout << s;
            i++;
        }
		std::cout << std::endl;
    }
    return (0);
}
