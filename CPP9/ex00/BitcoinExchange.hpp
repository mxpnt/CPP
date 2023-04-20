#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <map>
# include <limits.h>
# include <stdlib.h>

/***** splitString.cpp *****/
size_t		delim_counter(std::string str, char delim);
std::string	*split(std::string str, char delim);

class	BitcoinExchange	{
private:
	std::string						*inputDB;
	std::string						*dataDB;
	size_t							inputDB_size;
	size_t							dataDB_size;
	std::map<std::string, float>	dataMap;
public:
	BitcoinExchange();
	BitcoinExchange(std::string *inDB, std::string *data, size_t size_in, size_t size_data);
	BitcoinExchange(BitcoinExchange const &f);
	~BitcoinExchange();

	BitcoinExchange	&operator=(BitcoinExchange const &rhs);

	void	valid_format(size_t index);
	void	valid_date(size_t index);
	void	valid_value(size_t index);
	void	mapping_dataDB();
	void	processExchange();

	class	CustomException : public std::exception	{
		private:
			std::string	msg;
		public:
			CustomException(std::string m): msg(m) {}
			virtual ~CustomException() throw() {};
			virtual const char* what() const throw()
			{
				return (msg.c_str());
			}
	};
};

#endif