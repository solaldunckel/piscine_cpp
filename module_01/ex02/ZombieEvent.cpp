/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:34:35 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 10:57:09 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::ZombieEvent(std::string type)
{
	srand(time(0));
	std::cout << "A new zombie event full of " << type << " is on the way..." << std::endl;
	_type = type;
	return ;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "The " << _type << " event is over..." << std::endl;
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	std::cout << "The event is now full of " << type << "..." << std::endl;
	_type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie(name, _type);
	return (newZombie);
}

void	ZombieEvent::randomChump()
{
	Zombie		*zombie;
	std::string names[] = {"Benzema", "Zidane", "M.Pokora", "Laylow", "Britney Spears"};
	int			numRandom;

	numRandom = 5;
	zombie = this->newZombie(names[rand() % numRandom]);
	zombie->announce();
	delete zombie;
}
