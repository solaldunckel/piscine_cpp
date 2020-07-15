/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:32:38 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 17:12:51 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

/*
** Constructors & Deconstructors
*/

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy()
{
	*this = copy;
}

/*
** Operators Overload
*/

SuperMutant	&SuperMutant::operator=(const SuperMutant &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	damage = damage - 3;
	if (damage < 0)
		return ;
  if (_hp - damage < 0)
    _hp = 0;
  else
  	_hp -= damage;
}
