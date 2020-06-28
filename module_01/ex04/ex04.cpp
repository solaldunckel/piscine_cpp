/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:51:05 by sdunckel          #+#    #+#             */
/*   Updated: 2020/05/08 17:08:04 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int		main(void)
{
	std::string		str("HI THIS IS BRAIN");
	std::string		*str_p = &str;
	std::string		&str_r = str;

	std::cout << "Pointer : " << *str_p << std::endl;
	std::cout << "Reference : " << str_r << std::endl;
}
