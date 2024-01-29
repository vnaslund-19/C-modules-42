/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:30:37 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/29 18:46:01 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>

# include <stack>
# include <deque>

// MutantStack is a derived class of std::stack<T, std::deque<T>>. 
// It inherits the functionalities of a stack that uses a 
// std::deque<T> as its underlying container. 
// c is the container std::stack uses to store its elements
template<typename T>
class MutantStack : public std::stack<T, std::deque<T> >
{
	public:
		MutantStack() {};
		MutantStack(MutantStack const & other) : std::stack<T>(other) {};
		~MutantStack()
		{
            this->c.clear();
        }
		
		MutantStack & operator=(MutantStack const & other) 
		{
            if (other != &this) 
                this->c = other.c;
            return (*this);
        }
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (this->c.begin());
		}
        iterator end()
		{
			return (this->c.end());
		}
};	

#endif