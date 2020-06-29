/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/29 12:39:47 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

/*
** Constructors & Deconstructors
*/

AMateria::AMateria()
{
	_xp = 0;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::~AMateria()
{}

AMateria::AMateria(const AMateria &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

AMateria	&AMateria::operator=(const AMateria &copy)
{
	return (*this);
}

/*
** Functions
*/

std::string const	&AMateria::getType() const
{
	return _type;
}

unsigned int		AMateria::getXP() const
{
	return _xp;
}

void				AMateria::use(ICharacter& target)
{
	_xp += 10;
}
