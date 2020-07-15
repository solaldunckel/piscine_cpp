/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 17:06:17 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

/*
** Constructors & Deconstructors
*/

AWeapon::AWeapon()
{
}

AWeapon::AWeapon(std::string const &name, int apcost, int damage)
{
	_name = name;
	_apCost = apcost;
	_damage = damage;
}

AWeapon::~AWeapon()
{}

AWeapon::AWeapon(const AWeapon &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

AWeapon	&AWeapon::operator=(const AWeapon &copy)
{
	_name = copy._name;
	_apCost = copy._apCost;
	_damage = copy._damage;
	return (*this);
}

/*
** Get Functions
*/

std::string	AWeapon::getName() const
{
	return _name;
}

int			AWeapon::getAPCost() const
{
	return _apCost;
}

int			AWeapon::getDamage() const
{
	return _damage;
}
