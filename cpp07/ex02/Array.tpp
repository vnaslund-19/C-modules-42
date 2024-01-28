/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:14:09 by vnaslund          #+#    #+#             */
/*   Updated: 2024/01/28 18:36:58 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array() 
{
    _size = 0;
    _array = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int size) 
{
    _size = size;
    _array = new T[size];
}

template <typename T>

Array<T>::Array(const Array& other) 
{
	_size = other.size();
    _array = new T[_size];

    for (unsigned int i = 0; i < _size; i++) 
        _array[i] = other[i];
}

template <typename T>
Array<T>::~Array() 
{
    delete[] _array;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& other) 
{
    delete[] _array;

    _size = other.size();
	_array = new T[_size];

    for (unsigned int i = 0; i < _size; i++) 
        _array[i] = other[i];

    return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) 
{
    if (index >= _size) 
        throw std::out_of_range("Index out of range");
	else
    	return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
    if (index >= _size) 
        throw std::out_of_range("Index out of range");
	else
    	return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const 
{
    return (_size);
}