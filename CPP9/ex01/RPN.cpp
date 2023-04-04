#include "RPN.hpp"

static void	addition(std::deque<long int> *stack)
{
	long	n1;
	long	n2;

	n2 = stack->front();
	stack->pop_front();
	n1 = stack->front();
	stack->pop_front();
	stack->push_front(n1 + n2);
	std::cout << n1 << " + " << n2 << " = "<< stack->front() << std::endl;
}

static void	substraction(std::deque<long int> *stack)
{
	long	n1;
	long	n2;

	n2 = stack->front();
	stack->pop_front();
	n1 = stack->front();
	stack->pop_front();
	stack->push_front(n1 - n2);
	std::cout << n1 << " - " << n2 << " = "<< stack->front() << std::endl;
}

static void	multiplication(std::deque<long int> *stack)
{
	long	n1;
	long	n2;

	n2 = stack->front();
	stack->pop_front();
	n1 = stack->front();
	stack->pop_front();
	stack->push_front(n1 * n2);
	std::cout << n1 << " * " << n2 << " = "<< stack->front() << std::endl;
}

static void	division(std::deque<long int> *stack)
{
	long	n1;
	long	n2;

	n2 = stack->front();
	stack->pop_front();
	n1 = stack->front();
	stack->pop_front();
	if (n2 == 0)
	{
		std::cerr << "Error: division by 0 not possible" << std::endl;
		// gérer free splitArg main
		exit(1);
	}
	stack->push_front(n1 / n2);
	std::cout << n1 << " / " << n2 << " = " << stack->front() << std::endl;
}

void	calculator(std::string *str, size_t size)
{
	size_t			i = 0;
	std::deque<long int>	stack;

	while (i < size + 1)
	{
		if (str[i].size() == 2 || str[i].size() == 1)
		{
			if (isnumber(str[i][0]))
				stack.push_front(stol(str[i]));
			else if (str[i][0] == '+')
				addition(&stack);
			else if (str[i][0] == '-')
				substraction(&stack);
			else if (str[i][0] == '*')
				multiplication(&stack);
			else if (str[i][0] == '/')
				division(&stack);
		}
		else
		{
			std::cerr << "Error occured during the calculation. Step : " << i << std::endl;
			return ;
		}
		++i;
	}
	std::cout << stack.front() << std::endl;
}
