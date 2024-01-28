/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 17:43:49 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/28 18:34:35 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
	public:
		Array();
		Array(unsigned int size);
		Array(const Array& other);
		~Array();
		Array& operator=(const Array& other);
		const T& operator[](unsigned int index) const;
		T& operator[](unsigned int index);
		unsigned int size(void) const;
	
	private:
		T* 				_array;
		unsigned int	_size;
};

# include "Array.tpp"

#endif