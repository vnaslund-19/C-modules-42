/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:47:48 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/29 18:13:11 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// main from subject:
/*int main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}*/

int main() 
{
    try 
	{
        Span sp(5); // Create a Span with a maximum size of 5
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(9);
        sp.addNumber(-2);
		sp.addNumber(-2);

        std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl; // Should find the shortest span
        std::cout << "Longest Span: " << sp.longestSpan() << std::endl;  // Should find the longest span

        // Test with addMultiple
        Span spMulti(10); // Create a Span with a larger size for multiple additions
        std::vector<int> numbers;
        int arr[] = {1, 4, 8, 15, 16, 23, 42};
        numbers.insert(numbers.end(), arr, arr + sizeof(arr) / sizeof(arr[0])); // Adding elements to vector

        spMulti.addMultiple(numbers.begin(), numbers.end()); // Using addMultiple


        std::cout << "Shortest Span (multiple): " << spMulti.shortestSpan() << std::endl; // Should find the shortest span
        std::cout << "Longest Span (multiple): " << spMulti.longestSpan() << std::endl;  // Should find the longest span

    } 
	catch (const Span::SpanIsFullException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;}
	catch (const Span::SizeTooSmallException& e) {
        std::cerr << "Exception caught: " << e.what() << std::endl;} 
	catch (const std::exception& e) {
        std::cerr << "Standard exception: " << e.what() << std::endl;} 
	catch (...) {
        std::cerr << "Unknown exception caught" << std::endl;}

    return (0);
}