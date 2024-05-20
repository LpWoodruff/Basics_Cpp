#include <iostream>
#include "SortAlgs.h"

int main()
{
	std::vector<int> testCase = { 2,59,24,12,11,3,5,16,29,30, 0,42,32, };
	int size = testCase.size();
	
	SortAlgs sorter(testCase);


	sorter.bs_sort();

	std::vector<int> sorted = sorter.get_nums();

;

	for (int i = 0; i < sorted.size(); i++) 
	{
		std::cout << sorted[i];
		if (i < sorted.size() - 1)
		{
			std::cout << ", ";
		}
	}

	
}