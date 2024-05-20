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
		void ss_sort()
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
		void is_sort()
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
	// Bubble Sort
		/*
		Bubble sort works by repeatedly stepping through the list of elements to be sorted, comparing each pair of adjacent items, and swapping them if they are in the wrong order.
		*/
		void bs_sort()
		{
			int i, j;
			for (int i = 0; i < n - 1; i++)
				for (j = 0; j < n - i - 1; j++)
					if (nums[j] > nums[j + 1])
						std::swap(nums[j], nums[j + 1]);
			get_nums();
		}


		//void rs_sort(int p)
		//{
			//p = *max_element(a.begin(), a.end());
			//get_nums();
		//}
	 

};
