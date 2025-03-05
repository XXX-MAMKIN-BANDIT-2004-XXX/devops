#include <iostream>
#include <vector>
#include <string>
#include <sstream>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) {
            break;
        }
    }
}

void vectorDisplay(std::vector<int> arr)
{
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main()
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
    vectorDisplay(inputNumbers);
    
    bubbleSort(inputNumbers);

    std::cout << "Vector after sorting: ";
    vectorDisplay(inputNumbers);
}