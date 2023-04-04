#include "BitcoinExchange.hpp"

static int	file_format_error(std::string file)
{
	if (file.find(".txt") == std::string::npos)
	{
		std::cerr << "Error: file need to be <*.txt> format." << std::endl;
		return (1);
	}
	else
	{
		file.erase(file.find(".txt"), std::string::npos);
		if (file.find_first_not_of("abcdefghijklmnopqrstuvwxyz1234567890") != std::string::npos || !file.size())
		{
			std::cerr << "Error: file need to be <*.txt> format." << std::endl;
			return (1);
		}
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments: ./btc <*.txt>." << std::endl;
		return (1);
	}
	std::string	file = argv[1];
	if (file_format_error(file))
		return (1);

	std::ifstream	ifs;
	ifs.open(argv[1]);
	if (ifs.fail())
	{
		ifs.close();
		std::cerr << "Error: could not open input file." << std::endl;
	}
	std::stringstream	buf;
	buf << ifs.rdbuf();
	ifs.close();
	std::string	bufStr = buf.str();
	buf.str(""); // Clear buf
	std::string	*splitStr = split(bufStr, '\n');
	size_t		input_size = delim_counter(bufStr, '\n');
	// size_t i = 0;
	// while (i < delim_counter(bufStr, '\n'))
	// {
	// 	std::cout << "index " << i << ": " << splitStr[i];
	// 	++i;
	// }

	ifs.open("data.csv");
	if (ifs.fail())
	{
		ifs.close();
		std::cerr << "Error: could not open data file." << std::endl;
	}
	buf << ifs.rdbuf();
	ifs.close();
	bufStr = buf.str();
	std::string	*splitData = split(bufStr, '\n');
	// size_t i = 0;
	// while (i < 1)
	// {
	// 	std::cout << "index " << i << ": " << splitData[i];
	// 	++i;
	// }

	BitcoinExchange	BC(splitStr, splitData, input_size, delim_counter(bufStr, '\n'));
	// BC.convert();
	return (0);
}

// Delete splitStr