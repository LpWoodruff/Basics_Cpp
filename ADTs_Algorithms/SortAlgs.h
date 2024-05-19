#pragma once
#include <iostream>
#include <vector>
class SortAlgs
{
	private:
		std::vector<int> nums;
		int n;

	public:
		std::vector<int> get_nums() {
			return nums;
		}

	// Constructor
		SortAlgs(std::vector<int>& numbers) : nums(numbers), n(numbers.size()) {}




	// Selection Sort
	/*
		Selection sort works by selecting an element in an array, and compares it to all other elements linearly.
	*/
		void ss_Sort()
		{
			for (int i = 0; i < n - 1; i++)
			{
				int smallest = i;
				for (int j = i + 1; j < n; j++)
				{
					if (nums[j] < nums[smallest])
					{
						smallest = j;
					}
				}
				if (smallest != i)
				{
					std::swap(nums[smallest], nums[i]);
				}
			}
		}


	// Insertion Sort
	/*
		Insertion sort works by dividing an array into two parts, and sorts them individually	
	*/
		void is_Sort()
		{
			int key, j;
			for (int i = 1; i < n; i++)
			{
				key = nums[i];
				j = i - 1;
				while (j >= 0 && nums[j] > key)
				{
					nums[j + 1] = nums[j];
					j = j - 1;
				}
				nums[j + 1] = key;
			}
		}
	 

};
