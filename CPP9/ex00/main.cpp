#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments: ./btc <file>" << std::endl;
		return (1);
	}

	std::ifstream	ifs;
	ifs.open(argv[1]);
	if (ifs.fail())
	{
		ifs.close();
		std::cerr << "Error: could not open input file" << std::endl;
		return (1);
	}
	std::stringstream	buf;
	buf << ifs.rdbuf();
	ifs.close();
	std::string	bufStr = buf.str();
	if (bufStr == "")
	{
		std::cerr << "Error: empty file" << std::endl;
		return (1);
	}
	buf.str("");
	std::string	*splitStr = split(bufStr, '\n');

	if (splitStr[0] != "date | value")
	{
		delete [] splitStr;
		std::cerr << "Error: input file bad format" << std::endl;
		return (1);
	}

	size_t		input_size = delim_counter(bufStr, '\n');

	ifs.open("data.csv");
	if (ifs.fail())
	{
		ifs.close();
		std::cerr << "Error: could not open data file" << std::endl;
		delete [] splitStr;
		return (1);
	}
	buf << ifs.rdbuf();
	ifs.close();
	bufStr = buf.str();
	if (bufStr == "")
	{
		std::cerr << "Error: empty file" << std::endl;
		delete [] splitStr;
		return (1);
	}
	std::string	*splitData = split(bufStr, '\n');

	BitcoinExchange	BC(splitStr, splitData, input_size, delim_counter(bufStr, '\n'));

	delete [] splitStr;
	delete [] splitData;
	return (0);
}
