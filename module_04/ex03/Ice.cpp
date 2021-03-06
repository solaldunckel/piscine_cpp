/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/12 16:29:58 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

/*
** Constructors & Deconstructors
*/

Ice::Ice() : AMateria("ice")
{
}

Ice::~Ice()
{}

Ice::Ice(const Ice &copy) : AMateria("ice")
{
	*this = copy;
}

/*
** Operators Overload
*/

Ice	&Ice::operator=(const Ice &copy)
{
	_xp = copy.getXP();
	return (*this);
}

/*
** Functions
*/

AMateria*	Ice::clone() const
{
  Ice *clone = new Ice(*this);
	return (clone);
}


void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
