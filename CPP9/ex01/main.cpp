#include "RPN.hpp"

static int	invalid_arg(std::string str)
{
	if (str.find_first_not_of("0123456789+-/* ") != std::string::npos)
	{
		std::cout << "Error: incorrect argument" << std::endl;
		return (1);
	}
	if (str.length() < 2 && !isdigit(str[0]))
	{
		std::cout << "Error: need to start with number" << std::endl;
		return (2);
	}
	if (str[0] == ' ' || str[0] == '+' || str[0] == '/' || str[0] == '*' || (str[0] == '-' && !isdigit(str[1])))
	{
		std::cout << "Error: need to start with number" << std::endl;
		return (3);
	}
	size_t	i = 1;
	while (str[i])
	{
		if (str[i] == ' ')
		{
			if (!str[i + 1] || str[i + 1] == ' ')
			{
				std::cout << "Error: too many spaces between two arguments" << std::endl;
				return (4);
			}
		}
		++i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: wrong number of arguments: ./RPN \"+ - / * 0 1 2 3 4 5 6 7 8 9\"" << std::endl;
		return (1);
	}
	if (invalid_arg(argv[1]))
		return (1);
	std::string	*splitArg = split(argv[1], ' ');

	calculator(splitArg, delim_counter(argv[1], ' '));

	delete [] splitArg;
	return (0);
}
