/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnaslund <vnaslund@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:58:22 by vnaslund          #+#    #+#             */
/*   Updated: 2023/12/08 18:42:16 by vnaslund         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	_fixedPointValue = 0;
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	_fixedPointValue = num << _fractionalBits;
	//std::cout << "Int constructor called" << std::endl;
}
// 1 << 8 = 1 x 2^8
Fixed::Fixed(const float num) 
{
	_fixedPointValue = std::roundf(num * (1 << _fractionalBits));
	//std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other)
{
	this->_fixedPointValue = other._fixedPointValue;
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		this->_fixedPointValue = other._fixedPointValue;
	//std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedPointValue = raw;
	//std::cout << "setRawBits member function called" << std::endl;
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

// Comparison operators:

bool	Fixed::operator>(const Fixed& obj) const
{
	return this->_fixedPointValue > obj.getRawBits();
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return this->_fixedPointValue < obj.getRawBits();
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return this->_fixedPointValue >= obj.getRawBits();
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return this->_fixedPointValue <= obj.getRawBits();
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return this->_fixedPointValue == obj.getRawBits();
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return this->_fixedPointValue != obj.getRawBits();
}

// Arithmetic operators:

Fixed	Fixed::operator+(const Fixed& obj) const
{
	return Fixed(this->toFloat() + obj.toFloat());
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	return Fixed(this->toFloat() - obj.toFloat());
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	return Fixed(this->toFloat() * obj.toFloat());
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	return Fixed(this->toFloat() / obj.toFloat());
}

// Pre & post increment & decrement operators

Fixed& Fixed::operator++(void)
{
	++this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	temp._fixedPointValue = this->_fixedPointValue++;
	return temp;
}

Fixed& Fixed::operator--(void)
{
	--this->_fixedPointValue;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	temp._fixedPointValue = this->_fixedPointValue--;
	return temp;
}

// Max and min functions

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return b;
	else
		return a;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return b;
	else
		return a;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return b;
	else
		return a;
}
