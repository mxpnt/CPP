#include "PmergeMe.hpp"

static int	invalidArg(char **argv)
{
	size_t	i = 1;
	while (argv[i])
	{
		try
		{
			int	n = std::stoi(argv[i]);
			if (n < 0)
			{
				std::cout << "Error: arguments must be positive integers" << std::endl;
				return (1);
			}
		}
		catch (std::exception &e)
		{
			std::cout << "Error: arguments must be positive integers" << std::endl;
			return (1);
		}
		++i;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		std::cout << "Error: at least one argument is required" << std::endl;
		return (1);
	}
	if (invalidArg(argv))
		return (2);
	PmergeMe	test(argv);
	// test.vecSort();
	// test.vecPrint();
	test.dequeSort();
	test.dequePrint();
	return (0);
}
