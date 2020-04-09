/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/04/02 14:25:58 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_maxHp = 100;
	_energy = 100;
	_maxEnergy = 100;
	_level = 1;
	_meleeDamage = 30;
	_rangedDamage = 25;
	_armorReduction = 5;
	std::cout << _name << " has appeared.." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << _name << " is dead.." << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

FragTrap	&FragTrap::operator=(const FragTrap &copy)
{
	(void)copy;
	return (*this);
}

std::string	FragTrap::getName() const
{
	return (_name);
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

	if (_energy < 25)
	{
		std::cout << "Not enough energy (requires 25)" << std::endl;
		return ;
	}
	i = rand() % numberOfAttacks;
	_energy -= 25;
	std::cout << "FR4G-TP " << _name << " used " << attacks[i]
		<< " attack on " << target << " causing " << attacksDmg[i] << " damage !"
		<< std::endl;
}
