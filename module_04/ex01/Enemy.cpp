/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 17:12:35 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

/*
** Constructors & Deconstructors
*/

Enemy::Enemy()
{}

Enemy::Enemy(int hp, std::string const &type)
{
	_hp = hp;
	_type = type;
}

Enemy::~Enemy()
{}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

Enemy	&Enemy::operator=(const Enemy &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}

/*
** Functions
*/

int		Enemy::getHP() const
{
	return _hp;
}

std::string		Enemy::getType() const
{
	return _type;
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return ;
  if (_hp - damage < 0)
    _hp = 0;
  else
	  _hp -= damage;
}
