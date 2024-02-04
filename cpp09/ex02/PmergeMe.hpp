/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 19:32:48 by vnaslund          #+#    #+#             */
/*   Updated: 2024/02/04 17:13:16 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <algorithm>
# include <ctime>
# include <vector>
# include <list>

class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& other);
        PmergeMe&    operator=(const PmergeMe& other);

		void	sortVector(int argc, char **argv); // vector is an array with dynamic resizing
		void	sortList(int argc, char **argv); // std::list == doubly linked list
		// Sorting using a vector container is faster than in a list because
		// to access a list element you have to traverse the lists pointers
};

#endif