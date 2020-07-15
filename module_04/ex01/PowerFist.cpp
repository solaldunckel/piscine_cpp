/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/10 16:20:35 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

/*
** Constructors & Deconstructors
*/

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{}

PowerFist::~PowerFist()
{}

PowerFist::PowerFist(const PowerFist &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

PowerFist	&PowerFist::operator=(const PowerFist &copy)
{
	_name = copy.getDamage();
	_apCost = copy.getAPCost();
	_damage = copy.getDamage();
	return (*this);
}

/*
** Functions
*/

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
