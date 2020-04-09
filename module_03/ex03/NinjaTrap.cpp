/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:38:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/04/02 14:29:41 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	_hp = 60;
	_maxHp = 60;
	_energy = 120;
	_maxEnergy = 120;
	_level = 1;
	_meleeDamage = 60;
	_rangedDamage = 5;
	_armorReduction = 0;
	std::cout << _name << " has appeared.." << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << _name << " is dead.." << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &copy)
{
	(void)copy;
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
