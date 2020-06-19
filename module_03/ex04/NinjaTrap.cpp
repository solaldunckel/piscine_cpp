/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:38:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 15:05:23 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
	std::cout << "NinjaTrap constructor called!" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap deconstructor called!" << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &copy)
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
	return (*this);
}

std::string	NinjaTrap::getName() const
{
	return (_name);
}

void	NinjaTrap::ninjaShoebox(const FragTrap &target)
{
	if (_energy < 25)
	{
		std::cout << "Not enough energy (requires 25)" << std::endl;
		return ;
	}
	_energy -= 25;
	std::cout << "NinjaTrap " << _name << " throw his shoebox on "
		<< target.getName() << "!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
	(void)target;
	if (_energy < 25)
	{
		std::cout << "Not enough energy (requires 25)" << std::endl;
		return ;
	}
	_energy -= 25;
	std::cout << "NinjaTrap " << _name << " throw his shoebox on "
		<< target.getName() << "!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
	(void)target;
	if (_energy < 25)
	{
		std::cout << "Not enough energy (requires 25)" << std::endl;
		return ;
	}
	_energy -= 25;
	std::cout << "NinjaTrap " << _name << " throw his shoebox on "
		<< target.getName() << "!" << std::endl;
}
