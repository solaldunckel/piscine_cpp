/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 09:09:13 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/08 14:30:47 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <sstream>
# include <cmath>

class Fixed
{
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const value);
		Fixed(float const value);

		Fixed &operator=(const Fixed &copy);

		Fixed operator+(const Fixed &b) const;
		Fixed operator-(const Fixed &b) const;
		Fixed operator*(const Fixed &b) const;
		Fixed operator/(const Fixed &b) const;

		bool operator>(const Fixed &b) const;
		bool operator<(const Fixed &b) const;
		bool operator>=(const Fixed &b) const;
		bool operator<=(const Fixed &b) const;
		bool operator==(const Fixed &b) const;
		bool operator!=(const Fixed &b) const;

		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		static const Fixed		&min(const Fixed &a, const Fixed &b);
		static const Fixed		&max(const Fixed &a, const Fixed &b);
		static Fixed			&min(Fixed &a, Fixed &b);
		static Fixed			&max(Fixed &a, Fixed &b);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &value);

const Fixed		&min(const Fixed &a, const Fixed &b);
const Fixed		&max(const Fixed &a, const Fixed &b);
Fixed			&min(Fixed &a, Fixed &b);
Fixed			&max(Fixed &a, Fixed &b);

#endif
