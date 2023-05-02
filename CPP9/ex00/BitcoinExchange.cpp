#include "BitcoinExchange.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

BitcoinExchange::BitcoinExchange()
{
}

BitcoinExchange::BitcoinExchange(std::string *inDB, std::string *data, size_t size_in, size_t size_data)
{
	this->inputDB = inDB;
	this->inputDB_size = size_in;
	this->dataDB = data;
	this->dataDB_size = size_data;
	mapping_dataDB();
	processExchange();
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
	this->inputDB = rhs.inputDB;
	this->inputDB_size = rhs.inputDB_size;
	this->dataDB = rhs.dataDB;
	this->dataDB_size = rhs.dataDB_size;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	BitcoinExchange::valid_format(size_t index)
{
	size_t	i = 0;
	size_t	dot = 0;

	if (inputDB[index].length() < 13)
	{
		std::string	msg = "Error: bad input => " + inputDB[index] + "\n";
		throw BitcoinExchange::CustomException(msg);
	}
	while (i < inputDB[index].length() - 1)
	{
		if ((i >= 0 && i <= 3) || i == 5 || i == 6 || i == 8 || i == 9)
		{
			if (!isdigit(inputDB[index][i]))
			{
				std::string	msg = "Error: bad input => " + inputDB[index] + "\n";
				throw BitcoinExchange::CustomException(msg);
			}
		}
		else if (i == 4 || i == 7)
		{
			if (inputDB[index][i] != '-')
			{
				std::string	msg = "Error: bad input => " + inputDB[index] + "\n";
				throw BitcoinExchange::CustomException(msg);
			}
		}
		else if (i == 10 || i == 12)
		{
			if (inputDB[index][i] != ' ')
			{
				std::string	msg = "Error: bad input => " + inputDB[index] + "\n";
				throw BitcoinExchange::CustomException(msg);
			}
		}
		else if (i == 11)
		{
			if (inputDB[index][i] != '|')
			{
				std::string	msg = "Error: bad input => " + inputDB[index] + "\n";
				throw BitcoinExchange::CustomException(msg);
			}
		}
		else if (i >= 13)
		{
			if (inputDB[index][i] == '.')
				dot++;
			if (i == 13 && inputDB[index][i] == '-')
				break ;
			else if (!isdigit(inputDB[index][i]) && (inputDB[index][i] != '.' || (inputDB[index][i] == '.' && (dot > 1 || i == 13))))
			{
				std::string	msg = "Error: bad input => " + inputDB[index] + "\n";
				msg = msg.substr(0, msg.length());
				throw BitcoinExchange::CustomException(msg);
			}
		}
		++i;
	}
	if ((inputDB[index][i - 1] == '.' && inputDB[index][i] == '\n') || (inputDB[index][i] == '.'))
	{
		std::string	msg = "Error: bad input => " + inputDB[index] + "\n";
		throw BitcoinExchange::CustomException(msg);
	}
}

void	BitcoinExchange::valid_date(size_t index)
{
	std::string	syear = inputDB[index].substr(0,4);
	int	year = atoi(syear.c_str());
	std::string smonth = inputDB[index].substr(5,2);
	int	month = atoi(smonth.c_str());
	std::string	sday = inputDB[index].substr(8,2);
	int	day = atoi(sday.c_str());
	
	if (month > 12 || month < 1 || day > 31 || day < 1 || year < 0)
	{
		std::string	msg = "Error: invalid date\n";
		throw BitcoinExchange::CustomException(msg);
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	{
		std::string	msg = "Error: invalid day\n";
		throw BitcoinExchange::CustomException(msg);
	}
	else if (month == 2 && (day > 29 || (day > 28 && (year % 4) != 0)))
	{
		std::string	msg = "Error: invalid day in february (leap year)\n";
		throw BitcoinExchange::CustomException(msg);
	}
	else if (year < 2009 || (year == 2009 && month == 1 && day == 1))
	{
		std::string	msg = "Error: invalid date\n";
		throw BitcoinExchange::CustomException(msg);
	}
}

void	BitcoinExchange::valid_value(size_t index)
{
	char		*endPtr;
	std::string	svalue = inputDB[index].substr(inputDB[index].find_last_of(' '), std::string::npos - 1);
	double		value = strtod(svalue.c_str(), &endPtr);

	if (value < 0)
	{
		std::string	msg = "Error: not a positive value\n";
		throw BitcoinExchange::CustomException(msg);
	}
	try
	{
		std::string	svalue = inputDB[index].substr(inputDB[index].find_last_of(' '), std::string::npos - 1);
		long long int n = atoll(svalue.c_str());
		if (n > 1000)
		{
			std::string	msg = "Error: too large value\n";
			throw BitcoinExchange::CustomException(msg);
		}
	}
	catch (std::exception &e)
	{
		std::string	msg = "Error: too large value\n";
		throw BitcoinExchange::CustomException(msg);
	}
}

void	BitcoinExchange::processExchange()
{
	size_t i = 1;
	while (i < inputDB_size)
	{
		std::string	date;
		double		value;
		try
		{
			valid_format(i);
			valid_date(i);
			valid_value(i);

			date = inputDB[i].substr(0, inputDB[i].find_first_of(' '));
			std::string	svalue = inputDB[i].substr(inputDB[i].find_last_of(' '), std::string::npos - 1);
			char *endPtr;
			value = strtod(svalue.c_str(), &endPtr);

			std::map<std::string, float>::iterator	it_data = dataMap.lower_bound(date);
			std::map<std::string, float>::iterator	it_save = dataMap.begin();
			if (it_data == dataMap.end())
			{
				while (it_save != dataMap.end())
				{
					it_data = it_save;
					it_save++;
				}
			}
			if (date != it_data->first && it_data != dataMap.begin())
				it_data--;
			std::cout << date << " => " << value << " = " << value * it_data->second << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what();
		}
		++i;
	}
}

void	BitcoinExchange::mapping_dataDB()
{
	size_t	i = 1;
	while (i < dataDB_size)
	{
		std::string	date = dataDB[i].substr(0, dataDB[i].find_first_of(','));
		std::string	svalue = dataDB[i].substr(dataDB[i].find_first_of(',') + 1, std::string::npos - 1);
		char *endPtr;
		double	value = strtod(svalue.c_str(), &endPtr);
		this->dataMap[date] = value;
		++i;
	}
}
