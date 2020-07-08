/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/23 09:12:21 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/08 14:30:26 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int		main(void)
{
	Fixed a;
	Fixed const b(Fixed( 5.05f ) * Fixed( 2 ));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

  std::cout << Fixed::min(a, b) << std::endl;
  std::cout << a * b << std::endl;
  std::cout << a + b << std::endl;
  std::cout << b / a << std::endl;
  std::cout << (a == b) << std::endl;
  std::cout << (a != b) << std::endl;
  std::cout << (a > b) << std::endl;
  std::cout << (a < b) << std::endl;
	return 0;
}
