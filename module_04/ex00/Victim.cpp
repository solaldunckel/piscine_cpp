/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/17 16:13:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 16:50:43 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{}

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
	(void)copy;
	return (*this);
}

std::string	Victim::getName() const
{
	return (_name);
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
