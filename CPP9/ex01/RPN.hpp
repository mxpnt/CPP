#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <deque>

/***** splitString.cpp *****/
size_t		delim_counter(std::string str, char delim);
std::string	*split(std::string str, char delim);

/***** RPN.cpp *****/
void		calculator(std::string *str, size_t size);

#endif