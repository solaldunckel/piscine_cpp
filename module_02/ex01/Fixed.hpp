/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 09:09:13 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 12:10:49 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <sstream>
# include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(int const value);
		Fixed(float const value);
		~Fixed();

		Fixed &operator=(const Fixed &copy);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		int		toInt(void) const;
		float	toFloat(void) const;
	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &value);

#endif
