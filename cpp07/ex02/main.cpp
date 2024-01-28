/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:24:05 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/28 18:39:09 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

// A simple complex type for testing
struct ComplexType
{
    int data;
    std::string text;
};

int main(void)
{
    // Test creation of an empty array
    Array<int> emptyArray;
    std::cout << "Created an empty array of size: " << emptyArray.size() << std::endl;

    // Test creation of an array of a specific size
    const int size = 10;
    Array<int> intArray(size);
    std::cout << "Created an int array of size: " << intArray.size() << std::endl;

    // Test reading and writing through operator[]
    for (int i = 0; i < size; ++i) 
	{
        intArray[i] = i * 10;
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    // Test out-of-range access
    try {
        std::cout << "Accessing out-of-range element..." << std::endl;
        intArray[size] = 100; // Should throw an exception
    } catch (const std::exception& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    // Test with a complex type
    Array<ComplexType> complexArray(2);
    complexArray[0].data = 1;
    complexArray[0].text = "First";
    complexArray[1].data = 2;
    complexArray[1].text = "Second";

    for (int i = 0; i < 2; ++i)
	{
        std::cout << "complexArray[" << i << "]: { data: " << complexArray[i].data
                  << ", text: " << complexArray[i].text << " }" << std::endl;
    }

    // Const correctness test
    const Array<int> constIntArray(intArray);
    std::cout << "constIntArray[0] = " << constIntArray[0] << std::endl;

    return 0;
}
