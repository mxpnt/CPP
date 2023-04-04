#include "RPN.hpp"

size_t	delim_counter(std::string str, char delim)
{
	size_t	i = 0;
	size_t	count = 0;

	while(str[i])
	{
		if (str[i] == delim)
			++count;
		++i;
	}
	return (count);
}

std::string	*split(std::string str, char delim)
{
	size_t		size = delim_counter(str, delim);
	std::string	*splitstr = new std::string[size + 1];

	size_t	i = 0;
	size_t	found = str.find_first_of(delim);
	while (found != std::string::npos)
	{
		splitstr[i] = str.substr(0, str.find_first_of(delim) + 1);
		str.erase(0, str.find_first_of(delim) + 1);
		++i;
		found = str.find_first_of(delim);
		if (found == std::string::npos)
			splitstr[i] = str.substr(0, std::string::npos);
	}
	return (splitstr);
}
