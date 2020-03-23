/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:34:35 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/18 02:54:17 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(std::string type)
{
	std::cout << "A new zombie event full of " << type << " is on the way..." << std::endl;
	this->type = type;
	return ;
}

ZombieEvent::~ZombieEvent()
{
	std::cout << "The " << this->type << " event is over..." << std::endl;
	return ;
}

void	ZombieEvent::setZombieType(std::string type)
{
	std::cout << "The event is now full of " << type << "..." << std::endl;
	this->type = type;
	return ;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie	*newZombie;

	newZombie = new Zombie(name, this->type);
	return (newZombie);
}

Zombie	*ZombieEvent::randomChump()
{
	Zombie		*zombie;
	std::string names[] = {"Benzema", "Zidane", "M.Pokora", "Laylow", "Britney Spears"};
	int			numRandom;
	int			i;

	numRandom = 5;
	i = rand() % numRandom;
	zombie = this->newZombie(names[i]);
	zombie->announce();
	return (zombie);
}
