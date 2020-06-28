/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:17:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 11:05:04 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int num) : _num(num)
{
	srand(time(0));
	this->_horde = new Zombie[num];
	for (int i = 0; i < this->_num; i++)
	{
		this->_horde[i]._name = this->randomChump();
		this->_horde[i]._type = "Horde";
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "The horde is gone..." << std::endl;
	delete [] this->_horde;
}

void			ZombieHorde::announce()
{
	for (int i = 0; i < this->_num; i++)
		this->_horde[i].announce();
}

std::string		ZombieHorde::randomChump()
{
	std::string names[] = {"Benzema", "Zidane", "M.Pokora", "Laylow", "Britney Spears"};
	int			numRandom;

	numRandom = 5;
	return (names[rand() % numRandom]);
}
