/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:37:11 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {

}

ScavTrap::ScavTrap(std::string name) : _name(name), _hp(100), _maxHp(100),
	_energy(50), _maxEnergy(50), _level(1), _meleeDamage(20), _rangedDamage(15),
	_armorReduction(3)
{
	std::srand(std::time(0));
	std::cout << "* Let's get this party started! - SC4V-TP constructor called! *" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "* No fair! I wasn't ready. - SC4V-TP deconstructor called! *" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy)
{
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
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

void	ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "Chk-chk, BOOM! - <SC4V-TP> " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedDamage
		<< " points of damage!" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "Ready for the PUNCHline?! - <SC4V-TP> " << this->_name << " attacks " << target
		<< " in melee, causing " << this->_meleeDamage
		<< " points of damage!" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int	damage = amount - this->_armorReduction;

	if (damage < this->_hp)
		this->_hp = this->_hp - damage;
	else
		this->_hp = 0;
	std::cout << "Woah! Oh! Jeez! - <SC4V-TP> " << this->_name << " took " << damage
		<< " damage! (" << this->_hp << " hp remaining)" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	unsigned int	repaired = amount;

	if (this->_hp + repaired > this->_maxHp)
		repaired = this->_maxHp - this->_hp;
	this->_hp += repaired;
	std::cout << "Sweet life juice! - <SC4V-TP> " << this->_name << " repaired " << repaired
		<< " hp! (" << this->_hp << "/" << this->_maxHp << " hp)" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string const &target)
{
	std::string challenges[] = {
		"play card",
		"count stars",
		"walk without legs",
		"beat coronavirus",
		"find the answer to the question of the universe"
	};
	int			numberOfChallenges = 5;
	int			i;

	if (this->_energy < 25)
	{
		std::cout << "Coming up empty! - Not enough energy (requires 25)" << std::endl;
		return ;
	}
	i = rand() % numberOfChallenges;
	this->_energy -= 25;
	std::cout << "<SC4V-TP> " << this->_name << " challenges " << target
		<< " to " << challenges[i] << "!" << std::endl;
}
