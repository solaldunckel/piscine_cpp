/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:59:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/18 02:54:41 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"
# include "ZombieEvent.hpp"

int		main(void)
{
	Zombie		*zombie;
	Zombie		*zombie3;
	Zombie		zombie2("Xavier Niel", "Supreme Leader");
	ZombieEvent event("Noobies");

	zombie2.announce();
	zombie = new Zombie("Solal", "Chief Leader");
	zombie->announce();
	delete zombie;

	zombie = event.randomChump();

	event.setZombieType("Looser");
	zombie3 = event.randomChump();
	
	delete zombie3;
	delete zombie;
	return (0);
}
