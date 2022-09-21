/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapontil <mapontil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 13:39:52 by mapontil          #+#    #+#             */
/*   Updated: 2022/09/21 19:14:51 by mapontil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int argc, char **argv)
{
	std::ifstream		ifs;
	std::string			toFind;
	std::string			sub;
	std::stringstream	buf;
	std::string			bufStr;
	std::size_t			found; //pos toFind in ifs (== npos if no matches)
	std::ofstream		ofs;
	std::string			newfile;
	
	if (argc == 4)
	{
		newfile = (std::string)argv[1] + ".replace";
		ifs.open(argv[1]);
		if (ifs.fail())
		{
			ifs.close();
			return (1);
		}
		buf << ifs.rdbuf();
		ifs.close();
		bufStr = buf.str();
		std::cout << bufStr << std::endl;
		toFind = argv[2];
		sub = argv[3];
		found = bufStr.find(toFind);
		while (found != std::string::npos)
		{
			bufStr.erase(found, toFind.length());
			bufStr.insert(found, sub);
			found = bufStr.find(toFind);
		}
		ofs.open(newfile);
		if (ofs.fail())
		{
			ofs.close();
			return (2);
		}
		ofs << bufStr;
		ofs.close();
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
	return (0);
}
