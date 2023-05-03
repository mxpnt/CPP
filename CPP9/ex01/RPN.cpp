#include "RPN.hpp"

static int	addition(std::stack<float> *stack)
{
	float	n1 = 0;
	float	n2 = 0;

	if (stack->size())
	{
		n2 = stack->top();
		stack->pop();
	}
	if (stack->size())
	{
		n1 = stack->top();
		stack->pop();
	}
	else
	{
		std::cout << "Error: bad expression" << std::endl;
		return (1);
	}
	stack->push(n1 + n2);
	// std::cout << n1 << " + " << n2 << " = "<< stack->top() << std::endl;
	return (0);
}

static int	substraction(std::stack<float> *stack)
{
	float	n1 = 0;
	float	n2 = 0;

	if (stack->size())
	{
		n2 = stack->top();
		stack->pop();
	}
	if (stack->size())
	{
		n1 = stack->top();
		stack->pop();
	}
	else
	{
		std::cout << "Error: bad expression" << std::endl;
		return (1);
	}
	stack->push(n1 - n2);
	// std::cout << n1 << " - " << n2 << " = "<< stack->top() << std::endl;
	return (0);
}

static int	multiplication(std::stack<float> *stack)
{
	float	n1 = 0;
	float	n2 = 0;

	if (stack->size())
	{
		n2 = stack->top();
		stack->pop();
	}
	if (stack->size())
	{
		n1 = stack->top();
		stack->pop();
	}
	else
	{
		std::cout << "Error: bad expression" << std::endl;
		return (1);
	}
	stack->push(n1 * n2);
	// std::cout << n1 << " * " << n2 << " = "<< stack->top() << std::endl;
	return (0);
}

static int	division(std::stack<float> *stack)
{
	float	n1 = 0;
	float	n2 = 0;

	if (stack->size())
	{
		n2 = stack->top();
		stack->pop();
	}
	if (stack->size())
	{
		n1 = stack->top();
		stack->pop();
	}
	else
	{
		std::cout << "Error: bad expression" << std::endl;
		return (1);
	}
	if (n2 == 0)
	{
		std::cout << "Error: division by 0 not possible" << std::endl;
		return (1);
	}
	stack->push(n1 / n2);
	// std::cout << n1 << " / " << n2 << " = " << stack->top() << std::endl;
	return (0);
}

void	calculator(std::string *str, size_t size)
{
	size_t			i = 0;
	std::stack<float>	stack;

	while (i < size + 1)
	{
		if (str[i].size() == 1)
		{
			if (isdigit(str[i][0]))
				stack.push(atol(str[i].c_str()));
			else if (str[i][0] == '+')
			{
				if (addition(&stack))
					return ;
			}
			else if (str[i][0] == '-')
			{
				if (substraction(&stack))
					return ;
			}
			else if (str[i][0] == '*')
			{
				if (multiplication(&stack))
					return ;
			}
			else if (str[i][0] == '/')
			{
				if (division(&stack))
					return ;
			}
		}
		else
		{
			std::cout << "Error occured during the calculation. Step : " << i << std::endl;
			return ;
		}
		++i;
	}
	if (stack.size() == 1)
	{
		if (stack.top() > INT_MAX || stack.top() < INT_MIN)
			std::cout << "Error: value < INT_MIN or value > INT_MAX" << std::endl;
		else
			std::cout << stack.top() << std::endl;
	}
	else
		std::cout << "Error: incomplete expression" << std::endl;
}
