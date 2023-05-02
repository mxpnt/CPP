#include "BitcoinExchange.hpp"

size_t	delim_counter(std::string str, char delim)
{
	size_t	i = 0;
	size_t	j = 0;
	size_t	count = 0;

	while(str[i])
	{
		j = 1;
		if (str[i] == delim)
		{
			j = 0;
			++count;
		}
		++i;
	}
	if (j)
		++count;
	return (count);
}

std::string	*split(std::string str, char delim)
{
	size_t		size = delim_counter(str, delim);
	std::string	*splitstr = new std::string[size];

	size_t	i = 0;
	size_t	found = str.find_first_of(delim);
	while (found != std::string::npos)
	{
		splitstr[i] = str.substr(0, str.find_first_of(delim));
		str.erase(0, str.find_first_of(delim) + 1);
		++i;
		found = str.find_first_of(delim);
		if (found == std::string::npos)
		{
			if (str.size())
				splitstr[i] = str.substr(0, std::string::npos);
		}
	}
	if (i == 0)
		splitstr[i] = str.substr(0, std::string::npos);
<<<<<<< HEAD
=======
// ICI ERREUR
>>>>>>> 1f48728 (ex00 error handle ifs.empty/fail + date too soon + invalid date if len < 13)
	return (splitstr);
}
