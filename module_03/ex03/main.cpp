/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:59:51 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 17:22:15 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int		main(void)
{
	NinjaTrap	ninja("Hattori Hanzo");
	NinjaTrap	ninja2("Fujibayashi Nagato");
	FragTrap	frag("FRAG");
	ScavTrap	scav("SCAV");

	ninja.ninjaShoebox(ninja2);
	ninja.ninjaShoebox(frag);
	ninja.ninjaShoebox(scav);
  ninja.rangedAttack("Teha");
	ninja.meleeAttack("Zephyr");
	ninja.takeDamage(23);
	ninja.takeDamage(150);
	return (0);
}
