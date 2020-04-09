/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 09:09:13 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/26 09:31:55 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0)
{
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int const value) : _value(value << Fixed::_bits)
{
}

Fixed::Fixed(float const value) : _value(roundf(value * (1 << Fixed::_bits)))
{
}

Fixed::Fixed(const Fixed &copy)
{
	*this = copy;
}

Fixed	&Fixed::operator=(const Fixed &copy)
{
	this->_value = copy._value;
	return (*this);
}

int		Fixed::getRawBits() const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

int		Fixed::toInt() const
{
	return (this->_value >> Fixed::_bits);
}

float	Fixed::toFloat() const
{
	return ((float)(this->_value) / (1 << Fixed::_bits));
}

std::ostream	&operator<<(std::ostream &out, Fixed const &value)
{
	return (out << value.toFloat());
}

bool	Fixed::operator>(const Fixed &b) const
{
	return (this->getRawBits() > b.getRawBits());
}

bool	Fixed::operator<(const Fixed &b) const
{
	return (this->getRawBits() < b.getRawBits());
}

bool	Fixed::operator>=(const Fixed &b) const
{
	return (this->getRawBits() >= b.getRawBits());
}

bool	Fixed::operator<=(const Fixed &b) const
{
	return (this->getRawBits() <= b.getRawBits());
}

bool	Fixed::operator==(const Fixed &b) const
{
	return (this->getRawBits() == b.getRawBits());
}

bool	Fixed::operator!=(const Fixed &b) const
{
	return (this->getRawBits() != b.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &b) const
{
	Fixed	tmp;

	tmp._value = this->_value + b.getRawBits();
	return (tmp);
}

Fixed	Fixed::operator-(const Fixed &b) const
{
	Fixed	tmp;

	tmp._value = this->_value - b.getRawBits();
	return (tmp);
}

Fixed	Fixed::operator*(const Fixed &b) const
{
	Fixed	tmp(this->toFloat() * b.toFloat());

	return (tmp);
}

Fixed	Fixed::operator/(const Fixed &b) const
{
	Fixed	tmp(this->toFloat() / b.toFloat());
	
	return (tmp);
}

Fixed	&Fixed::operator++(void)
{
	this->_value++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	++this->_value;
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	this->_value--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	--this->_value;
	return (tmp);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a < b ? b : a);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a < b ? b : a);
}
