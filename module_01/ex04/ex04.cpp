/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:51:05 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/19 01:55:04 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int		main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*str_p = &str;
	std::string		&str_r = str;

	std::cout << "Pointer :" << std::endl << *str_p << std::endl;
	std::cout << "Reference :" << std::endl << str_r << std::endl;
}
