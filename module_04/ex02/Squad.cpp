/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:39:36 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/29 09:34:47 by sdunckel         ###   ########.fr       */
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
	this->deleteUnits();
}

Squad::Squad(const Squad &copy)
{
	*this = copy;
}

/*
** Operators Overload
*/

Squad	&Squad::operator=(const Squad &copy)
{
	printf("operator\n");
	_count = copy._count;
	this->deleteUnits();
	this->copyUnits(copy);
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
	int		count = 0;
	t_list	*tmp = _units;

	if (!tmp)
		return NULL;
	while (tmp)
	{
		if (count == id)
			break;
		count++;
		tmp = tmp->next;
	}
	return tmp->unit;
}

int				Squad::push(ISpaceMarine *unit)
{
	if (!unit)
		return _count;

	t_list	*tmp = _units;

	if (tmp)
	{
		while (tmp->next)
		{
			if (tmp->unit == unit || tmp->next->unit == unit)
				return _count;
			tmp = tmp->next;
		}
		tmp->next = new t_list;
		tmp->next->unit = unit;
		tmp->next->next = NULL;
	}
	else
	{
		_units = new t_list;
		_units->unit = unit;
		_units->next = NULL;
	}
	_count++;
	return _count;
}

void			Squad::deleteUnits()
{
	t_list	*tmp = _units;
	t_list	*tmp2;

	while (tmp)
	{
		tmp2 = tmp->next;
		delete tmp->unit;
		delete tmp;
		tmp = tmp2;
	}
}

void			Squad::copyUnits(const Squad &copy)
{
	t_list	*begin = NULL;
	t_list	*tmp = copy._units;
	t_list	*tmp2 = NULL;

	while (tmp)
	{
		if (!begin)
		{
			begin = new t_list;
			begin->unit = tmp->unit->clone();
			begin->next = NULL;
			tmp2 = begin;
		}
		else
		{
			tmp2->next = new t_list;
			tmp2 = tmp2->next;
			tmp2->unit = tmp->unit->clone();
			tmp2->next = NULL;
		}
		tmp = tmp->next;
	}
	_units = begin;
}
