/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 13:35:04 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
	std::srand(std::time(0));
	std::cout << "FragTrap constructor called!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called!" << std::endl;
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
	return (*this);
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
		std::cout << "Not enough energy (requires 25)" << std::endl;
		return ;
	}
	i = rand() % numberOfAttacks;
	this->_energy -= 25;
	std::cout << "FR4G-TP " << this->_name << " used " << attacks[i]
		<< " attack on " << target << " causing " << attacksDmg[i] << " damage !"
		<< std::endl;
}
