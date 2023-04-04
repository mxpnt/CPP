#include "RPN.hpp"

static int	isope(char c)
{
	if (c == '/' || c == '*' || c == '+' || c == '-')
		return (1);
	return (0);
}

static int	invalid_arg(std::string str)
{
	if (str.find_first_not_of("0123456789+-/* ") != std::string::npos)
	{
		std::cerr << "Error: incorrect argument" << std::endl;
		return (1);
	}
	if (str[0] == ' ')
		return (2);
	size_t	i = 1;
	while (str[i])
	{
		if (!isdigit(str[i]) && !isope(str[i]) && str[i] != ' ')
			return (3);
		if (str[i] == ' ')
		{
			if (!str[i + 1] || str[i + 1] == ' ')
				return (4);
		}
		++i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of arguments: ./RPN \"+ - / * 0 1 2 3 4 5 6 7 8 9\"" << std::endl;
	}
	if (invalid_arg(argv[1]))
		return (1);
	std::string	*splitArg = split(argv[1], ' ');

	calculator(splitArg, delim_counter(argv[1], ' '));

	delete [] splitArg;
	return (0);
}
