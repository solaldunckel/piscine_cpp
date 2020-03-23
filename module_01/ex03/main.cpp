/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:33:09 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/19 01:48:39 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

int		main(void)
{
	ZombieHorde	horde(9);
	ZombieHorde	*horde2;

	std::cout << "Horde on the stack :" << std::endl;
	horde.announce();

	std::cout << "Horde on the heap :" << std::endl;
	horde2 = new ZombieHorde(12);
	horde2->announce();
	delete horde2;
	return (0);
}
