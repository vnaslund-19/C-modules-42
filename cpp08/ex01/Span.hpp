/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 16:20:53 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/29 18:03:12 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <exception>
# include <vector>
# include <algorithm>

class Span
{
	private:
		typedef std::vector<int>::iterator I;
		
	public:
		Span(unsigned int n);
		Span(const Span& other);
		~Span();
		Span& operator=(const Span& other);
		
		void			addNumber(int n);
		void			addMultiple(I start, I end);
		unsigned int	shortestSpan() const;
		unsigned int	longestSpan() const;
		int				size() const;

		class SpanIsFullException : public std::exception 
		{
			public: virtual const char* what() const throw();
		};

		class SizeTooSmallException : public std::exception 
		{
			public: virtual const char* what() const throw();
		};
	
	private:
		Span();
		std::vector<int>	_vector;
		int					_size;
};

#endif