# include "PmergeMe.hpp"

/***** CONSTRUCTORS AND DESTRUCTOR *****/

PmergeMe::PmergeMe()
{
}

PmergeMe::PmergeMe(char **argv)
{
	size_t	i = 1;

	while (argv[i])
	{
		int	n = std::stoi(argv[i]);
		this->vecPMM.push_back(n);
		this->dequePMM.push_back(n);
		++i;
	}
}

PmergeMe::PmergeMe(PmergeMe const &f)
{
	*this = f;
}

PmergeMe::~PmergeMe()
{
}

/***** OPERATORS *****/

PmergeMe	&PmergeMe::operator=(PmergeMe const &rhs)
{
	this->vecPMM = rhs.vecPMM;
	this->dequePMM = rhs.dequePMM;
	return (*this);
}

/***** MEMBER FUNCTIONS *****/

void	PmergeMe::exec()
{
	std::cout << "Before (vector): ";
	vecPrint();
	std::cout << "Before (deque): ";
	dequePrint();

	struct timeval startVec, endVec;
    double execTimeVec;

    gettimeofday(&startVec, NULL);
    vecSort();
    gettimeofday(&endVec, NULL);
    execTimeVec = static_cast<double>((endVec.tv_sec - startVec.tv_sec) * 1000000 + (endVec.tv_usec - startVec.tv_usec));
	std::cout << "After (vector): ";
	vecPrint();
	std::cout << "Time to process a range of " << vecPMM.size() << " elements with std::vector : " << execTimeVec << " µs" << std::endl;

	struct timeval startDeque, endDeque;
    double execTimeDeque;

    gettimeofday(&startDeque, NULL);
    dequeSort();
    gettimeofday(&endDeque, NULL);
    execTimeDeque = static_cast<double>((endDeque.tv_sec - startDeque.tv_sec) * 1000000 + (endDeque.tv_usec - startDeque.tv_usec));
	std::cout << "After (deque): ";
	dequePrint();
	std::cout << "Time to process a range of " << dequePMM.size() << " elements with std::deque : "<< execTimeDeque << " µs" << std::endl;
}

/*--------------------------------------------------------------------------------------------------*/
void	PmergeMe::vecSort()
{
	vecMergeSort(0, vecPMM.size() - 1);
}

void	PmergeMe::vecMergeSort(int first, int last)
{
	if (first >= last)
		return ;
	if (last - first + 1 <= THRESHOLD)
	{
		vecInsertSort(first, last);
	}
	else
	{
		int	mid = first + (last - first) / 2;

		vecMergeSort(first, mid);
		vecMergeSort(mid + 1, last);
		vecMerge(first, mid, last);
	}
}

void	PmergeMe::vecMerge(int first, int mid, int last)
{
	int one_size = mid - first + 1;
    int two_size = last - mid;

    std::vector<int> tmp_one(one_size);
    std::vector<int> tmp_two(two_size);

    for (int i = 0; i < one_size; i++)
        tmp_one[i] = vecPMM[first + i];

    for (int i = 0; i < two_size; i++)
        tmp_two[i] = vecPMM[mid + 1 + i];

    int i, j, k;

    i = 0, j = 0, k = first;

    while (i < one_size && j < two_size)
    {
        if (tmp_one[i] <= tmp_two[j])
        {
            this->vecPMM[k] = tmp_one[i];
            i++;
        }
        else
        {
            this->vecPMM[k] = tmp_two[j];
            j++;
        }
        k++;
    }
    while (i < one_size)
    {
        this->vecPMM[k] = tmp_one[i];
        i++;
        k++;
    }
    while (j < two_size)
    {
        this->vecPMM[k] = tmp_two[j];
        j++;
        k++;
    }
}

void	PmergeMe::vecInsertSort(int mid, int last)
{
	for (int i = mid; i < last; ++i)
	{
		int	tmp = vecPMM[i + 1];
		int	j = i + 1;
		while (j > mid && vecPMM[j - 1] > tmp)
		{
			this->vecPMM[j] = vecPMM[j - 1];
			j--;
		}
		this->vecPMM[j] = tmp;
	}
}

void	PmergeMe::vecPrint()
{
	for (size_t i = 0; i < vecPMM.size(); ++i)
		std::cout << vecPMM[i] << " ";
	std::cout << "\n";
}

/*--------------------------------------------------------------------------------------------------*/

void	PmergeMe::dequeSort()
{
	dequeMergeSort(0, dequePMM.size() - 1);
}

void	PmergeMe::dequeMergeSort(int first, int last)
{
	if (first >= last)
		return ;
	if (last - first + 1 <= THRESHOLD)
	{
		dequeInsertSort(first, last);
	}
	else
	{
		int	mid = first + (last - first) / 2;

		dequeMergeSort(first, mid);
		dequeMergeSort(mid + 1, last);
		dequeMerge(first, mid, last);
	}
}

void	PmergeMe::dequeMerge(int first, int mid, int last)
{
	int one_size = mid - first + 1;
    int two_size = last - mid;

    std::deque<int> tmp_one(one_size);
    std::deque<int> tmp_two(two_size);

    for (int i = 0; i < one_size; i++)
        tmp_one[i] = dequePMM[first + i];

    for (int i = 0; i < two_size; i++)
        tmp_two[i] = dequePMM[mid + 1 + i];

    int i, j, k;

    i = 0, j = 0, k = first;

    while (i < one_size && j < two_size)
    {
        if (tmp_one[i] <= tmp_two[j])
        {
            this->dequePMM[k] = tmp_one[i];
            i++;
        }
        else
        {
            this->dequePMM[k] = tmp_two[j];
            j++;
        }
        k++;
    }
    while (i < one_size)
    {
        this->dequePMM[k] = tmp_one[i];
        i++;
        k++;
    }
    while (j < two_size)
    {
        this->dequePMM[k] = tmp_two[j];
        j++;
        k++;
    }
}

void	PmergeMe::dequeInsertSort(int mid, int last)
{
	for (int i = mid; i < last; ++i)
	{
		int	tmp = dequePMM[i + 1];
		int	j = i + 1;
		while (j > mid && dequePMM[j - 1] > tmp)
		{
			this->dequePMM[j] = dequePMM[j - 1];
			j--;
		}
		this->dequePMM[j] = tmp;
	}
}

void	PmergeMe::dequePrint()
{
	for (size_t i = 0; i < dequePMM.size(); ++i)
		std::cout << dequePMM[i] << " ";
	std::cout << "\n";
}