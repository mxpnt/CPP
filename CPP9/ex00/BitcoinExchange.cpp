#include "BitcoinExchange.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string *inDB, size_t size)
{
	this->inputDB = inDB;
	this->inputDB_size = size;
	mapping_inputDB();
}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &f)
{
	*this = f;
}

BitcoinExchange::~BitcoinExchange()
{
}

/***** OPERATORS *****/

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	// Check si existe pour delete avant copie ?
	this->inputDB = rhs.inputDB;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

std::map<std::string, float>	BitcoinExchange::mapping_inputDB()
{
	size_t i = 1;
	// Check si inputDB_size != 0 ?
	while (i < inputDB_size)
	{
		// if (invalid_mapping())
		// {

		// }
		std::string date = inputDB[i].substr(0, inputDB[i].find_first_of(' '));
		float		value = std::stof(inputDB[i].substr(inputDB[i].find_last_of(' '), std::string::npos - 1));
		this->inputMap[date] = value;
		++i;
	}
}
