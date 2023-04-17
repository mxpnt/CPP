#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <sys/time.h>

# define THRESHOLD 16

class	PmergeMe	{
private:
	std::vector<int>	vecPMM;
	std::deque<int>		dequePMM;
public:
	PmergeMe();
	PmergeMe(char **argv);
	PmergeMe(PmergeMe const &f);
	~PmergeMe();

	PmergeMe	&operator=(PmergeMe const &rhs);

	void	exec();

	void	vecSort();
	void	vecMergeSort(int first, int last);
	void	vecMerge(int first, int mid, int last);
	void	vecInsertSort(int mid, int last);
	void	vecPrint();

	void	dequeSort();
	void	dequeMergeSort(int first, int last);
	void	dequeMerge(int first, int mid, int last);
	void	dequeInsertSort(int mid, int last);
	void	dequePrint();
};

#endif
