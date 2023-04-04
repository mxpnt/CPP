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
	std::cout << "ok constru" << std::endl;
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

// Maybe del '-' & i == 13 conditions
void	BitcoinExchange::valid_format(size_t index)
{
	size_t	i = 0;
	size_t	dot = 0;

	if (inputDB[index].length() < 14)
		throw BitcoinExchange::CustomException("Error: bad input => should be \"****-**-** | *\"");
	while (i < inputDB[index].length() - 1)
	{
		if ((i >= 0 && i <= 3) || i == 5 || i == 6 || i == 8 || i == 9)
		{
			if (!isdigit(inputDB[index][i]))
			{
				std::string	msg = "Error: bad input => " + inputDB[index].substr(0, 10);
				throw BitcoinExchange::CustomException(msg);
			}
		}
		else if (i == 4 || i == 7)
		{
			if (inputDB[index][i] != '-')
			{
				std::string	msg = "Error: bad input => " + inputDB[index].substr(0, 10);
				throw BitcoinExchange::CustomException(msg);
			}
		}
		else if (i == 10 || i == 12)
		{
			if (inputDB[index][i] != ' ')
			{
				std::string msg = "Error: bad format";
				throw BitcoinExchange::CustomException(msg);
			}
		}
		else if (i == 11)
		{
			if (inputDB[index][i] != '|')
			{
				std::string msg = "Error: bad format";
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
				std::string	msg = "Error: bad input => q" + inputDB[index].substr(13);
				msg = msg.substr(0, msg.length() - 1);
				throw BitcoinExchange::CustomException(msg);
			}
		}
		++i;
	}
	if (inputDB[index][i - 1] == '.')
	{
		std::string	msg = "Error: bad input => " + inputDB[index].substr(13, std::string::npos - 1);
		throw BitcoinExchange::CustomException(msg);
	}
}

// Check année bissextile (février) + mois 30/31
void	BitcoinExchange::valid_date(size_t index)
{
	int	year = std::stoi(inputDB[index].substr(0, 4));
	int	month = std::stoi(inputDB[index].substr(5, 2));
	int	day = std::stoi(inputDB[index].substr(8, 2));
	
	if (month > 12 || month < 1 || day > 31 || day < 1 || year < 0)
	{
		std::string	msg = "Error: invalid date";
		throw BitcoinExchange::CustomException(msg);
	}
	else if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
	{
		std::string	msg = "Error: invalid day";
		throw BitcoinExchange::CustomException(msg);
	}
	else if (month == 2 && (day > 29 || (day > 28 && (year % 4) != 0)))
	{
		std::string	msg = "Error: invalid day in february (leap year)";
		throw BitcoinExchange::CustomException(msg);
	}
}

void	BitcoinExchange::valid_value(size_t index)
{
	float	value = std::stof(inputDB[index].substr(inputDB[index].find_last_of(' '), std::string::npos - 1));

	if (value < 0)
	{
		std::string	msg = "Error: not a positive value";
		throw BitcoinExchange::CustomException(msg);
	}
	try
	{
		stoi(inputDB[index].substr(inputDB[index].find_last_of(' '), std::string::npos - 1));
	}
	catch (std::exception &e)
	{
		std::string	msg = "Error: too large value";
		throw BitcoinExchange::CustomException(msg);
	}
}

void	BitcoinExchange::mapping_inputDB()
{
	size_t i = 1;
	// Check si inputDB_size != 0 ?
	while (i < inputDB_size)
	{
		std::string	date;
		float		value;
		try
		{
			valid_format(i);
			valid_date(i);
			valid_value(i);
			std::cout << "mapping " << i << std::endl;
			date = inputDB[i].substr(0, inputDB[i].find_first_of(' '));
			value = std::stof(inputDB[i].substr(inputDB[i].find_last_of(' '), std::string::npos - 1));
			this->inputMap[date] = value;
			std::cout << "date: " << date << " | value: " << value << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << "catch  " << i << std::endl;
			date = e.what();
			value = 0;
			std::cout << date << " | " << value << std::endl;
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
		float		value = std::stof(dataDB[i].substr(dataDB[i].find_first_of(','), std::string::npos - 1));
		this->dataMap[date] = value;
		++i;
	}
}
