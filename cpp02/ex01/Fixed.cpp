/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 13:40:38 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 17:56:20 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	_fixedPointValue = num << _fractionalBits;
	std::cout << "Int constructor called" << std::endl;
}
// 1 << 8 = 1 x 2^8
Fixed::Fixed(const float num) 
{
	_fixedPointValue = std::roundf(num * (1 << _fractionalBits));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	this->_fixedPointValue = other._fixedPointValue;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->_fixedPointValue = other._fixedPointValue;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
	std::cout << "setRawBits member function called" << std::endl;
}
// 1 << 8 = 1 x 2^8
float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixedPointValue) / (1 << _fractionalBits));
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> _fractionalBits);
}

std::ostream & operator<<(std::ostream& out, Fixed const& obj)
{
	out << obj.toFloat();
	return (out);
}
