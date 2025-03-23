#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "BubbleSort.h"

bool CompareValues(std::vector<int> testValues, std::vector<int> expectedValues, int num)
{
	for (int i = 0; i < testValues.size(); i++)
	{
		if (testValues[i] != expectedValues[i])
		{
			std::cout << "Test number " << num << " failed!" << std::endl;
			return false;
		}
	}

	return true;
}

bool BubbleSortTest()
{
	std::vector<int> testValues1{ 7, 3, 4, 9, -12, 174 };

	std::vector<int> testValues2{ 9, 8, 7, 6, 5, 4, 2, -31 };

	std::vector<int> testValues3{ 134, 1, 553, 13, -1, -2 };


	std::vector<int> expectedValues1{ -12, 3, 4, 7, 9, 174 };

	std::vector<int> expectedValues2{ -31, 2, 4, 5, 6, 7, 8, 9 };

	std::vector<int> expectedValues3{ -2, -1, 1, 13, 134, 553 };


	BubbleSort::sort(testValues1);

	BubbleSort::sort(testValues2);

	BubbleSort::sort(testValues3);

	bool res1 = CompareValues(testValues1, expectedValues1, 1);

	bool res2 = CompareValues(testValues2, expectedValues2, 2);

	bool res3 = CompareValues(testValues3, expectedValues3, 3);

	if (res1 && res2 && res3)
	{
		return true;
	}

	return false;
}

int main()
{
	if (!BubbleSortTest())
		return 1;

	std::cout << "All tests passed\n";

	return 0;
}
