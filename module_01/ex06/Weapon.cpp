/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 18:54:55 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 19:32:15 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{}

Weapon::~Weapon()
{}

const std::string	&Weapon::getType()
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}
