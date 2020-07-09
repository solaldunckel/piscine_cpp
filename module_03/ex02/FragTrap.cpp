/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:39:50 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 
    30, 20, 5, "FragTrap")
{
	std::srand(std::time(0));
	std::cout << "* You're the wub to my dub! - FR4G-TP constructor called! *" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "* Argh arghargh death gurgle gurglegurgle urgh... death. - FR4G-TP destructor called! *" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
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

void	FragTrap::rangedAttack(std::string const &target)
{
  std::cout << "Bad guy go boom! - <FR4G-TP> " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedDamage
		<< " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const &target)
{
  std::cout << "Hyah - <FR4G-TP> " << this->_name << " attacks " << target
		<< " in melee, causing " << this->_meleeDamage
		<< " points of damage!" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	std::string attacks[] = {
		"Coronavirus",
		"Roar",
		"Fireball",
		"Meteor",
		"Moonfire"
	};
	int			attacksDmg[] = {10000, 25, 40, 70, 1};
	int			numberOfAttacks = 5;
	int			i;

	if (this->_energy < 25)
	{
		std::cout << "Not enough energy (requires 25). Who needs energy anyway, am I right?" << std::endl;
		return ;
	}
	i = rand() % numberOfAttacks;
	this->_energy -= 25;
	std::cout << "Recompiling my combat code! - <FR4G-TP> " << this->_name << " used " << attacks[i]
		<< " attack on " << target << " causing " << attacksDmg[i] << " damage !"
		<< std::endl;
}
