/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:58:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 16:10:28 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(name), NinjaTrap(name)
{
	std::cout << "SuperTrap constructor called!" << std::endl;
	std::cout << "HP : " << _hp << " / ENERGY : " << _energy << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor called!" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy)
{
	*this = copy;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &copy)
{
	(void)copy;
	return (*this);
}
