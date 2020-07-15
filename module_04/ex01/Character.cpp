/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:47 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 17:27:29 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** Constructors & Deconstructors
*/

Character::Character()
{}

Character::Character(std::string const &name)
{
	_name = name;
	_ap = 40;
	_weapon = NULL;
}

Character::~Character()
{}

Character::Character(const Character &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

Character	&Character::operator=(const Character &copy)
{
	_name = copy._name;
	_ap = copy._ap;
  _weapon = copy._weapon;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Character const &character)
{
	std::stringstream ss;

	if (character.getWeapon())
		ss << character.getName() << " has " << character.getAP()
			<< " AP and wields a " << character.getWeapon()->getName();
	else
		ss << character.getName() << " has " << character.getAP()
			<< " AP and is unarmed";
	return (out << ss.str() << std::endl);
}

/*
** Functions
*/

void	Character::recoverAP()
{
	_ap += 10;
	if (_ap > 40)
		_ap = 40;
}

void	Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void	Character::attack(Enemy *enemy)
{
	if (_ap < _weapon->getAPCost() || _weapon == NULL || !enemy)
		return;
	_ap -= _weapon->getAPCost();
	std::cout << _name << " attacks " << enemy->getType() << " with a "
		<< _weapon->getName() << std::endl;
	_weapon->attack();
	enemy->takeDamage(_weapon->getDamage());
	if (enemy->getHP() <= 0) {
    delete enemy;
  }
}

std::string	Character::getName() const
{
	return _name;
}

int			Character::getAP() const
{
	return _ap;
}

AWeapon		*Character::getWeapon() const
{
	return _weapon;
}
