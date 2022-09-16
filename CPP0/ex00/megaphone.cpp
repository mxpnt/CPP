/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 16:55:51 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/16 22:16:44 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

using std::string;
using std::toupper;
using std::cout;
using std::endl;

int	main(int argc, char **argv)
{
    string			s;
    unsigned int	j;
    int				i;

    if (argc == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    else if (argc > 1)
    {
        i = 1;
        while (argv[i])
        {
            s = argv[i];
            for (j = 0; j < s.length(); j++)
            	s[j] = toupper(s[j]);
            cout << s;
            i++;
        }
		cout << endl;
    }
    return (0);
}
