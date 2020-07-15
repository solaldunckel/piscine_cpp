/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/12 16:30:13 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** Constructors & Deconstructors
*/

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{}

Cure::Cure(const Cure &copy) : AMateria("cure")
{
	*this = copy;
}

/*
** Operators Overload
*/

Cure	&Cure::operator=(const Cure &copy)
{
	_xp = copy.getXP();
	return (*this);
}

/*
** Functions
*/

AMateria*	Cure::clone() const
{
  Cure *clone = new Cure(*this);
	return (clone);
}


void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}
