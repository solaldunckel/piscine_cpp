/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:39:36 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/26 20:16:16 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

/*
** Constructors & Deconstructors
*/

Squad::Squad()
{
	_count = 0;
	_units = NULL;
}

Squad::~Squad()
{
	int		i = 0;

	std::cout << _count << std::endl;
	while (i < _count)
	{
		delete _units[i];
		i++;
	}
	delete _units;
}

Squad::Squad(const Squad &copy)
{
	int		i = 0;

	std::cout << _count << std::endl;
	while (i < _count)
	{
		delete _units[i];
		i++;
	}
	delete _units;
	*this = copy;
}

/*
** Operators Overload
*/

Squad	&Squad::operator=(const Squad &copy)
{
	_count = copy._count;
	_units = copy._units;
	return (*this);
}

/*
** Functions
*/

int				Squad::getCount() const
{
	return _count;
}

ISpaceMarine*	Squad::getUnit(int id) const
{
	if (_units[id])
		return _units[id];
	return (NULL);
}

int				Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return _count;

	int		i = 0;

	while (i < _count)
	{
		if (unit == _units[i])
			return _count;
		i++;
	}

	ISpaceMarine	**newUnits = new ISpaceMarine*[_count + 1];

	i = 0;
	while (i < _count)
	{
		newUnits[i] = _units[i];
		i++;
	}
	newUnits[i] = unit;

	if (_units)
		delete [] _units;

	_units = newUnits;
	_count++;
	return _count;
}
