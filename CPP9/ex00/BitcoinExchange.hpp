#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <map>

size_t		delim_counter(std::string str, char delim);
std::string	*split(std::string str, char delim);
class	BitcoinExchange	{
private:
	std::string	*inputDB;
	size_t		inputDB_size;
	std::map<std::string, float> inputMap;
public:
	BitcoinExchange();
	BitcoinExchange(std::string *inDB, size_t size);
	BitcoinExchange(BitcoinExchange const &f);
	~BitcoinExchange();

	BitcoinExchange	&operator=(BitcoinExchange const &rhs);

	std::map<std::string, float>	mapping_inputDB();
};

#endif