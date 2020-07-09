/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 15:05:02 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:41:39 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
}

ClapTrap::ClapTrap(std::string name, int hp, int maxHp, int energy, int maxEnergy,
	int level, int meleeDamage, int rangedDamage, int armorReduction, std::string type)
{
	std::srand(std::time(0));
	std::cout << "* CL4P-TP built! *" << std::endl;
	_name = name;
	_hp = hp;
	_maxHp = maxHp;
	_energy = energy;
	_maxEnergy = maxEnergy;
	_level = level;
	_meleeDamage = meleeDamage;
	_rangedDamage = rangedDamage;
	_armorReduction = armorReduction;
  _type = type;
}

ClapTrap::~ClapTrap()
{
	std::cout << "* CL4P-TP annhilated! *" << std::endl;
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
  _type = copy._type;
	return (*this);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage = amount - _armorReduction;

	if (damage < _hp)
		_hp = _hp - damage;
	else
		_hp = 0;
  std::cout << "Why do I even feel pain?! - <CL4P-TP> " << this->_name << " took " << damage
  << " damage! (" << this->_hp << " hp remaining)" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	unsigned int	repaired = amount;

	if (_hp + repaired > _maxHp)
		repaired = _maxHp - _hp;
	_hp += repaired;
  std::cout << "I found health! - <CL4P-TP> " << this->_name << " repaired " << repaired
		<< " hp! (" << this->_hp << "/" << this->_maxHp << " hp)" << std::endl;
}
