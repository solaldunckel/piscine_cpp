/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/29 17:18:48 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

/*
** Constructors & Deconstructors
*/

Cure::Cure() : AMateria("cure")
{
	// _type = "cure";
}

Cure::~Cure()
{}

Cure::Cure(const Cure &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

Cure	&Cure::operator=(const Cure &copy)
{
	(void)copy;
	return (*this);
}

/*
** Functions
*/

AMateria*	Cure::clone() const
{
	return (new Cure);
}


void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	AMateria::use(target);
}