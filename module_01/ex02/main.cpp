/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:59:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 10:59:14 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		*zombie;
	ZombieEvent event("Noobies");
	ZombieEvent event2;

	zombie = event.newZombie("Solal");
	zombie->announce();

	event2.setZombieType("TheDeads");
	event2.randomChump();
	
	event.randomChump();
	event.setZombieType("Looser");
	event.randomChump();

	delete zombie;
	return (0);
}
