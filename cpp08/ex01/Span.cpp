/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 17:10:04 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/29 18:05:11 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void)
{
	
}

Span::Span(unsigned int size) : _size(size)
{
	
}

Span::Span(const Span& other) : _vector(other._vector), _size(other._size)
{
	*this = other;
}

Span::~Span()
{
	
}

Span& Span::operator=(const Span& other)
{
	if (this == &other)
		return *this;

	this->_size = other._size;
	this->_vector = other._vector;

	return *this;
}

void	Span::addNumber(int num)
{
	if (this->_vector.size() >= _size)
		throw Span::SpanIsFullException();
	else
		_vector.push_back(num);
}

void	Span::addMultiple(I start, I end)
{
	if ((_vector.size() + std::distance(start, end)) > _size)
		throw Span::SpanIsFullException();
	else
		_vector.insert(this->_vector.end(), start, end);
}

unsigned int	Span::shortestSpan() const
{
	if (_size < 2 || _vector.size() < 2)
		throw Span::SizeTooSmallException();
	
	std::vector<int> copy(_vector);
	std::sort(copy.begin(), copy.end());
	
	int	span;
	I	i = copy.begin();
	int	ret = INT_MAX;
	
	while (i != (copy.end() - 1))
	{
		span = *(i + 1) - *i;
		if (span < ret)
			ret = span;
		i++;
	}
	return (ret);
}

unsigned int	Span::longestSpan() const
{
	if (_size < 2 || _vector.size() < 2)
		throw Span::SizeTooSmallException();
	else
		return (*std::max_element(_vector.begin(), _vector.end())
				- *std::min_element(_vector.begin(), _vector.end()));
}

int	Span::size(void) const
{
	return (_size);
}

const char*	Span::SpanIsFullException::what() const throw() 
{
	return ("Span is full, no numbers can be added");
}

const char*	Span::SizeTooSmallException::what() const throw() 
{
	return ("Size of span is less than 2, there is no span to find");
}