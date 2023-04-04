#include "RPN.hpp"

static void	addition(std::deque<long int> *stack)
{
	long	n1 = 0;
	long	n2 = 0;

	if (stack->front())
	{
		n2 = stack->front();
		stack->pop_front();
	}
	if (stack->front())
	{
		n1 = stack->front();
		stack->pop_front();
	}
	stack->push_front(n1 + n2);
	std::cout << n1 << " + " << n2 << " = "<< stack->front() << std::endl;
}

static void	substraction(std::deque<long int> *stack)
{
	long	n1 = 0;
	long	n2 = 0;

	if (stack->front())
	{
		n2 = stack->front();
		stack->pop_front();
	}
	if (stack->front())
	{
		n1 = stack->front();
		stack->pop_front();
	}
	stack->push_front(n1 - n2);
	std::cout << n1 << " - " << n2 << " = "<< stack->front() << std::endl;
}

static void	multiplication(std::deque<long int> *stack)
{
	long	n1 = 0;
	long	n2 = 0;

	if (stack->front())
	{
		n2 = stack->front();
		stack->pop_front();
	}
	if (stack->front())
	{
		n1 = stack->front();
		stack->pop_front();
	}
	stack->push_front(n1 * n2);
	std::cout << n1 << " * " << n2 << " = "<< stack->front() << std::endl;
}

static void	division(std::deque<long int> *stack)
{
	long	n1 = 0;
	long	n2 = 0;

	if (stack->front())
	{
		n2 = stack->front();
		stack->pop_front();
	}
	if (stack->front())
	{
		n1 = stack->front();
		stack->pop_front();
	}
	if (n2 == 0)
	{
		std::cout << "Error: division by 0 not possible" << std::endl;
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
		// Check if str[i] >= 10 ?
		// Check if correct handle "1 1 + + + + + + +"
		if (str[i].size() <= 3)
		{
			if (isnumber(str[i][0]) || (str[i][0] == '-' && isnumber(str[i][1])))
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
			std::cout << "Error occured during the calculation. Step : " << i << std::endl;
			return ;
		}
		++i;
	}
	std::cout << stack.front() << std::endl;
}
