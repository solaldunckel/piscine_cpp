/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:44:07 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3, "ScavTrap")
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
  _type = copy._type;
	return (*this);
}

std::string ScavTrap::getName() const {
  return _name;
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
