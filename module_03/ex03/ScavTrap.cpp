/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/04/02 14:29:04 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_maxHp = 100;
	_energy = 50;
	_maxEnergy = 50;
	_level = 1;
	_meleeDamage = 20;
	_rangedDamage = 15;
	_armorReduction = 3;
	std::cout << _name << " has appeared.." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << _name << " is dead.." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	*this = copy;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &copy)
{
	(void)copy;
	return (*this);
}

std::string	ScavTrap::getName() const
{
	return (_name);
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

	if (_energy < 25)
	{
		std::cout << "Not enough energy (requires 25)" << std::endl;
		return ;
	}
	i = rand() % numberOfChallenges;
	_energy -= 25;
	std::cout << "SC4V-TP " << _name << " challenges " << target
		<< " to " << challenges[i] << "!" << std::endl;
}
