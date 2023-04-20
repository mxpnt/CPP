#include "PmergeMe.hpp"

static int	invalidArg(char **argv)
{
	size_t	i = 1;
	while (argv[i])
	{
		size_t	j = 0;
		while (argv[i][j])
		{
			if (!isdigit(argv[i][j]))
			{
				std::cout << "Error: arguments must be positive integers" << std::endl;
				return (1);
			}
			++j;
		}
		long long int	value = atoll(argv[i]);
		if (value > INT_MAX)
		{
			std::cout << "Error: arguments too large" << std::endl;
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

	test.exec();

	return (0);
}
