/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/29 17:16:55 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

/*
** Constructors & Deconstructors
*/

Character::Character()
{
	for (int i = 0; i < _maxInventorySize; i++)
		_inventory[i] = NULL;
}

Character::Character(std::string name)
{
	for (int i = 0; i < _maxInventorySize; i++)
		_inventory[i] = NULL;
	_name = name;
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
	(void)copy;
	return (*this);
}

/*
** Functions
*/

std::string const	&Character::getName() const
{
	return _name;
}

void				Character::equip(AMateria *m)
{
	for (int i = 0; i < _maxInventorySize; i++)
	{
		if (!_inventory[i])
		{
			_inventory[i] = m;
			return ;
		}
	}
}

void				Character::unequip(int idx)
{
	if (idx >= _maxInventorySize || !_inventory[idx])
		return ;
	this->_inventory[idx] = NULL;
}

void				Character::use(int idx, ICharacter &target)
{
	if (idx >= _maxInventorySize || !_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
}