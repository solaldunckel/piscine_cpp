/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/29 17:09:16 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** Constructors & Deconstructors
*/

MateriaSource::MateriaSource()
{
	_num = 0;
}

MateriaSource::~MateriaSource()
{}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	(void)copy;
	return (*this);
}

/*
** Functions
*/

void			MateriaSource::learnMateria(AMateria *m)
{
	this->_materias[_num] = m;
	_num++;
}

AMateria		*MateriaSource::createMateria(std::string const &type)
{
	int		i = 0;

	while (i < _num)
	{
		if (_materias[i]->getType() == type)
			return _materias[i]->clone();
		i++;
	}
	return 0;
}
