/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:54:55 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 19:32:55 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{}

HumanB::~HumanB()
{}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack()
{
	std::string format;

	format += this->_name + " attacks with his " + this->_weapon->getType();
	std::cout << format << std::endl;
}
