/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 17:28:30 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

/*
** Constructors & Deconstructors
*/

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy)  : Enemy()
{
	*this = copy;
}

/*
** Operators Overload
*/

RadScorpion	&RadScorpion::operator=(const RadScorpion &copy)
{
	_hp = copy._hp;
	_type = copy._type;
	return (*this);
}
