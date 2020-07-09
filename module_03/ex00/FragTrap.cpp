/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:36:10 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() {

}

FragTrap::FragTrap(std::string name) : _name(name), _hp(100), _maxHp(100),
	_energy(100), _maxEnergy(100), _level(1), _meleeDamage(30), _rangedDamage(20),
	_armorReduction(5)
{
	std::srand(std::time(0));
	std::cout << "* You're the wub to my dub! - FR4G-TP constructor called! *" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "* Argh arghargh death gurgle gurglegurgle urgh... death. - FR4G-TP destructor called! *" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
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

void	FragTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage = amount - this->_armorReduction;

	if (damage < this->_hp)
		this->_hp = this->_hp - damage;
	else
		this->_hp = 0;
	std::cout << "Why do I even feel pain?! - <FR4G-TP> " << this->_name << " took " << damage
		<< " damage! (" << this->_hp << " hp remaining)" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	unsigned int	repaired = amount;

	if (this->_hp + repaired > this->_maxHp)
		repaired = this->_maxHp - this->_hp;
	this->_hp += repaired;
	std::cout << "I found health! - <FR4G-TP> " << this->_name << " repaired " << repaired
		<< " hp! (" << this->_hp << "/" << this->_maxHp << " hp)" << std::endl;
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
