/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:58:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:48:43 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name, 100, 100, 120, 120, 1, 60, 20, 5, "SuperTrap"), FragTrap(name), NinjaTrap(name)
{
	std::cout << "* SUP3R-TP constructor called! *" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << "* SUP3R-TP destructor called! *" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy), FragTrap(copy), NinjaTrap(copy)
{
	*this = copy;
}

SuperTrap	&SuperTrap::operator=(const SuperTrap &copy)
{
	_name = copy._name;
	_hp = copy._hp;
	_maxHp = copy._maxHp;
	_energy = copy._energy;
	_maxEnergy = copy._maxEnergy;
	_level = copy._level;
	_meleeDamage = copy._meleeDamage;
	_rangedDamage = copy._rangedDamage;
	_armorReduction = copy._armorReduction;
  _type = copy._type;
	return (*this);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
  FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
  NinjaTrap::meleeAttack(target);
}
