/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 15:05:02 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 12:46:20 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name, int hp, int maxHp, int energy, int maxEnergy,
	int level, int meleeDamage, int rangedDamage, int armorReduction)
{
	std::srand(std::time(0));
	std::cout << "ClapTrap constructor called!" << std::endl;
	_name = name;
	_hp = hp;
	_maxHp = maxHp;
	_energy = energy;
	_maxEnergy = maxEnergy;
	_level = level;
	_meleeDamage = meleeDamage;
	_rangedDamage = rangedDamage;
	_armorReduction = armorReduction;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	*this = copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
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

void	ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target
		<< " at range, causing " << _rangedDamage
		<< " points of damage!" << std::endl;
}

void	ClapTrap::meleedAttack(std::string const &target)
{
	std::cout << _name << " attacks " << target
		<< " in melee, causing " << _meleeDamage
		<< " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage = amount - _armorReduction;

	if (damage < _hp)
		_hp = _hp - damage;
	else
		_hp = 0;
	std::cout << _name << " took " << damage
		<< " damage! (" << _hp << " hp remaining)" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	repaired = amount;

	if (_hp + repaired > _maxHp)
		repaired = _maxHp - _hp;
	_hp += repaired;
	std::cout << _name << " repaired " << repaired
		<< " hp! (" << _hp << "/" << _maxHp << " hp)" << std::endl;
}
