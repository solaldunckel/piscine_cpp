/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:34:35 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/19 01:49:39 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::~Zombie()
{
	return ;
}

void	Zombie::announce()
{
	std::string	output;

	output = "<" + this->name + " (" + this->type + ")> Braiiiiiiinnnssss...";
	std::cout << output << std::endl;
	return ;
}
