/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 15:05:02 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/27 15:32:07 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name)
{
	std::cout << "clap trap builded" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "clap trap deleted" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	(void)copy;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &copy)
{
	(void)copy;
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
