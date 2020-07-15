/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:13:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/10 15:24:09 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!"
		<< std::endl;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!"
		<< std::endl;
}

Victim::Victim(const Victim &copy)
{
	*this = copy;
}

Victim	&Victim::operator=(const Victim &copy)
{
	_name = copy.getName();
	return (*this);
}

std::string	Victim::getName() const
{
	return (_name);
}

void	Victim::setName(std::string name)
{
	_name = name;
}

void	Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!"
		<< std::endl;
}

std::ostream	&operator<<(std::ostream &out, Victim const &victim)
{
	std::string introduction;

	introduction += "I'm " + victim.getName() + " and I like otters!\n";
	return (out << introduction);
}
