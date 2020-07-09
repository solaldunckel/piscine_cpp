/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:59:51 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:50:24 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	FragTrap	first("Solal");
	ScavTrap	second("Teha");

	first.rangedAttack("Teha");
	first.meleeAttack("Zephyr");
	first.takeDamage(23);
	first.takeDamage(150);
	first.beRepaired(30);
	first.beRepaired(130);
	first.beRepaired(180);
	first.vaulthunter_dot_exe("Zephyr");
	first.vaulthunter_dot_exe("Teha");
	first.vaulthunter_dot_exe("Agathe");
	first.vaulthunter_dot_exe("Sylvanas");
	first.vaulthunter_dot_exe("Vol'jin");

	second.rangedAttack("Solal");
	second.meleeAttack("Zephyr");
	second.takeDamage(18);
	second.takeDamage(55);
	second.beRepaired(12);
	second.beRepaired(120);
	second.beRepaired(0);
	second.challengeNewcomer("Boris Johnson");
	second.challengeNewcomer("Donald Trump");
	second.challengeNewcomer("Macron");
	return (0);
}
