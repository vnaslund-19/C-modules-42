// Insert header

#include "easyfind.hpp"

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    std::vector<int> myVector(arr, arr + sizeof(arr) / sizeof(arr[0]));

    int needle = 30;
    std::vector<int>::iterator it = easyfind(myVector, needle);

    if (it != myVector.end())
        std::cout << "1: Found: " << *it << std::endl;
    else
        std::cout << "1: Element not found" << std::endl;

    // Search for an element that does not exist
    needle = 100;
    it = easyfind(myVector, needle);

    if (it != myVector.end())
        std::cout << "2: Found: " << *it << std::endl;
    else
        std::cout << "2: Element not found" << std::endl;

    return (0);
}