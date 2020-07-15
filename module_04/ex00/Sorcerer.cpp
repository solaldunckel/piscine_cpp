/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:13:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/10 14:45:42 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	*this = copy;
}

std::string	Sorcerer::getName() const
{
	return _name;
}

std::string	Sorcerer::getTitle() const
{
	return _title;
}

void		Sorcerer::polymorph(const Victim &victim) const
{
	victim.getPolymorphed();
}

Sorcerer	&Sorcerer::operator=(const Sorcerer &copy)
{
	_name = copy._name;
  _title = copy._title;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Sorcerer const &sorcerer)
{
	std::string introduction;

	introduction += "I am " + sorcerer.getName() + ", " + sorcerer.getTitle()
		+ ", and I like ponies!\n";
	return (out << introduction);
}
