/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:34:35 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 11:04:38 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{}

Zombie::~Zombie()
{}

void	Zombie::announce()
{
	std::string	output;

	output = "<" + _name + " (" + _type + ")> Braiiiiiiinnnssss...";
	std::cout << output << std::endl;
	return ;
}
