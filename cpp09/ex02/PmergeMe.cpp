/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:32:45 by vnaslund          #+#    #+#             */
/*   Updated: 2024/02/04 17:11:25 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
static std::vector<unsigned int>	mergeSortVector(std::vector<unsigned int>& vector);
static std::vector<unsigned int>	mergeVectors(std::vector<unsigned int>& left, std::vector<unsigned int>& right);
static std::list<unsigned int>		mergeSortList(std::list<unsigned int>& list);
static std::list<unsigned int>		mergeLists(std::list<unsigned int>& left, std::list<unsigned int>& right);

PmergeMe::PmergeMe(void)
{

}

PmergeMe::~PmergeMe(void)
{

}

PmergeMe::PmergeMe(const PmergeMe& other)
{
	*this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other)
{
	(void)other;
	return (*this);
}

static void	printVector(std::vector<unsigned int>& vector)
{
	std::vector<unsigned int>::const_iterator	it;
	
	for (it = vector.begin(); it != vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::sortVector(int argc, char **argv)
{
	std::vector<unsigned int>	vector;

	try 
	{for (int i = 1; i < argc; i++)
		vector.push_back(std::stoll(argv[i]));}
	catch (const std::invalid_argument& e) 
		{std::cerr << "Invalid argument: " << e.what() << std::endl;}
	catch (const std::out_of_range& e)
		{std::cerr << "Out of range: " << e.what() << std::endl;}
	
	std::cout << "Vector before: ";
	printVector(vector);

	std::clock_t	start_time = std::clock();

	vector = mergeSortVector(vector);

	double	time_taken = static_cast<double>(std::clock() - start_time) / static_cast<double>(CLOCKS_PER_SEC) * 100000; // microseconds conversion

	std::cout << "Vector after: ";
	printVector(vector);

	std::cout << "Time to process a range of " << argc - 1 << " elements "
			  << "std::vector<unsigned int> :  " << time_taken << " µs" << std::endl;
}

static std::vector<unsigned int>	mergeSortVector(std::vector<unsigned int>& vector)
{
	if (vector.size() <= 1) // base case to stop recursion
		return (vector);
	
	// divide vector into 2 to start the algo
	int	middle = vector.size() / 2;
	std::vector<unsigned int> left(vector.begin(), vector.begin() + middle);
	std::vector<unsigned int> right(vector.begin() + middle, vector.end());

	left = mergeSortVector(left);
	right = mergeSortVector(right);

	return (mergeVectors(left, right));
}

static std::vector<unsigned int>	mergeVectors(std::vector<unsigned int>& left, std::vector<unsigned int>& right)
{
	std::vector<unsigned int>	result;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			result.push_back(right.front());
			right.erase(right.begin());
		}
	}

	while (!left.empty())
	{
		result.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.erase(right.begin());
	}
	
	return (result);
}

static void	printList(std::list<unsigned int>& list)
{
	std::list<unsigned int>::const_iterator	it;
	
	for (it = list.begin(); it != list.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::sortList(int argc, char **argv)
{
	std::list<unsigned int>	list;

	try 
	{for (int i = 1; i < argc; i++)
		list.push_back(std::stoll(argv[i]));}
	catch (const std::invalid_argument& e) 
		{std::cerr << "Invalid argument: " << e.what() << std::endl;}
	catch (const std::out_of_range& e)
		{std::cerr << "Out of range: " << e.what() << std::endl;}
	
	std::cout << "List before: ";
	printList(list);

	std::clock_t	start_time = std::clock();

	list = mergeSortList(list);

	double	time_taken = static_cast<double>(std::clock() - start_time) / static_cast<double>(CLOCKS_PER_SEC) * 100000; // microseconds conversion

	std::cout << "List after: ";
	printList(list);

	std::cout << "Time to process a range of " << argc - 1 << " elements "
			  << "std::list<unsigned int> :  " << time_taken << " µs" << std::endl;
}

static std::list<unsigned int>	mergeSortList(std::list<unsigned int>& list)
{
	if (list.size() <= 1) // base case to stop recursion
		return (list);
	
	// divide list into 2 to start the algo
	int	middle = list.size() / 2;
	std::list<unsigned int>	left;
	std::list<unsigned int>	right;

	for (int i = 0; i < middle; i++)
	{
		left.push_back(list.front());
		list.pop_front();
	}
	right = list;

	left = mergeSortList(left);
	right = mergeSortList(right);

	return (mergeLists(left, right));
}

static std::list<unsigned int>	mergeLists(std::list<unsigned int>& left, std::list<unsigned int>& right)
{
	std::list<unsigned int>	result;

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			result.push_back(left.front());
			left.pop_front();
		}
		else
		{
			result.push_back(right.front());
			right.pop_front();
		}
	}

	while (!left.empty())
	{
		result.push_back(left.front());
		left.pop_front();
	}
	while (!right.empty())
	{
		result.push_back(right.front());
		right.pop_front();
	}
	
	return (result);
}
