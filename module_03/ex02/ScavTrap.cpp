/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 13:34:53 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
	std::srand(std::time(0));
	std::cout << "ScavTrap constructor called!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap deconstructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
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
		std::cout << "Not enough energy (requires 25)" << std::endl;
		return ;
	}
	i = rand() % numberOfChallenges;
	this->_energy -= 25;
	std::cout << "SC4V-TP " << this->_name << " challenges " << target
		<< " to " << challenges[i] << "!" << std::endl;
}
