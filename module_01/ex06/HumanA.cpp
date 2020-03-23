/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:54:55 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 19:32:42 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{}

HumanA::~HumanA()
{}

void	HumanA::attack()
{
	std::string format;

	format += this->_name + " attacks with his " + this->_weapon.getType();
	std::cout << format << std::endl;
}
