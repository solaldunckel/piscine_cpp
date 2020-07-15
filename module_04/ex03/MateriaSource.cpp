/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 16:54:13 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

/*
** Constructors & Deconstructors
*/

MateriaSource::MateriaSource()
{
	_num = 0;
  for (int i = 0; i < _maxMateria; i++) {
    _materias[i] = NULL;
  }
}

MateriaSource::~MateriaSource()
{
  for (int i = 0; i < _num; i++) {
    delete _materias[i];
  }
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
  for (int i = 0; i < _maxMateria; i++) {
    _materias[i] = NULL;
  }
	*this = copy;
}

/*
** Operators Overload
*/

MateriaSource	&MateriaSource::operator=(const MateriaSource &copy)
{
	for (int i = 0; i < _num; i++) {
    delete _materias[i];
    _materias[i] = NULL;
  }
  _num = 0;
  for (int i = 0; i < copy._num; i++) {
    learnMateria(copy._materias[i]->clone());
  }
	return (*this);
}

/*
** Functions
*/

void			MateriaSource::learnMateria(AMateria *m)
{
  if (_num >= _maxMateria || m == NULL)
    return;
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
