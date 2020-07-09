/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:38:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:45:39 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0, "NinjaTrap")
{
	std::cout << "* N1NJ-TP constructor called! *" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "* N1NJ-TP deconstructor called! *" << std::endl;
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
  _type = copy._type;
	return (*this);
}

std::string	NinjaTrap::getName() const
{
	return (_name);
}

void	NinjaTrap::rangedAttack(std::string const &target)
{
  std::cout << "Present for you! - <N1NJ4-TP> " << this->_name << " attacks " << target
		<< " at range, causing " << this->_rangedDamage
		<< " points of damage!" << std::endl;
}

void	NinjaTrap::meleeAttack(std::string const &target)
{
  std::cout << "Take that! - <N1NJ4-TP> " << this->_name << " attacks " << target
		<< " in melee, causing " << this->_meleeDamage
		<< " points of damage!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const FragTrap &target)
{
	std::cout << "I'll calm you down, FR4G-TP! - <N1NJ-TP> " << _name << " throw his shoebox on "
		<< target.getName() << "!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const ScavTrap &target)
{
	std::cout << "Activating god mode... - <N1NJ-TP> " << _name << " throw his shoebox on "
		<< target.getName() << "!" << std::endl;
}

void	NinjaTrap::ninjaShoebox(const NinjaTrap &target)
{
	std::cout << "I'm THE robot ninja! - <N1NJ-TP> " << _name << " throw his shoebox on "
		<< target.getName() << "!" << std::endl;
}
