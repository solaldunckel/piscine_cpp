/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:29:44 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/18 01:34:06 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak()
{
	std::string *panther;

	panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	delete panther;
}
