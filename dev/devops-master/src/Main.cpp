#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "bubblesort.h"

void main()
{
    std::vector<int> inputNumbers;
    int  value = 0;
    std::string inputValue;

    std::cout << "Input integer values. (Enter a non-number to complete your entry)" << std::endl;

    while (std::cin >> inputValue)
    {
        std::stringstream ss(inputValue);
        ss >> value;

        if (ss.fail())
        {
            if (inputNumbers.size() < 2)
                std::cout << "You need to input at least 2 numbers" << std::endl;

            else
                break;
        }
        else
            inputNumbers.push_back(value);
    }

    std::cout << "Vector before sorting: ";
    BubbleSort::vectorDisplay(inputNumbers);

    BubbleSort::sort(inputNumbers);

    std::cout << "Vector after sorting: ";
    BubbleSort::vectorDisplay(inputNumbers);
}