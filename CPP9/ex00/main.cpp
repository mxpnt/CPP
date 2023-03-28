#include "BitcoinExchange.hpp"

static int	file_format_error(std::string file)
{
	if (file.find(".txt") == std::string::npos)
	{
		std::cerr << "File need to be <*.txt> format" << std::endl;
		return (1);
	}
	else
	{
		file.erase(file.find(".txt"), std::string::npos);
		if (file.find_first_not_of("abcdefghijklmnopqrstuvwxyz1234567890") != std::string::npos || !file.size())
		{
			std::cerr << "File need to be <*.txt> format" << std::endl;
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong number of arguments: ./btc <*.txt>" << std::endl;
		return (1);
	}
	std::string	file = argv[1];
	if (file_format_error(file))
		return (1);
	
	return (0);
}
