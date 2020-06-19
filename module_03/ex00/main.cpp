/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:59:51 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 12:29:25 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	solal("Solal");
	FragTrap	teha("Teha");
	FragTrap	clone(solal);

	teha.rangedAttack("Trump");
	teha = solal;
	solal.meleedAttack("Zephyr");
	solal.takeDamage(23);
	teha.takeDamage(24);
	clone.takeDamage(25);
	solal.takeDamage(150);
	solal.beRepaired(30);
	solal.beRepaired(130);
	solal.beRepaired(180);
	solal.vaulthunter_dot_exe("Zephyr");
	solal.vaulthunter_dot_exe("Teha");
	solal.vaulthunter_dot_exe("Agathe");
	solal.vaulthunter_dot_exe("Sylvanas");
	solal.vaulthunter_dot_exe("Vol'jin");
	return (0);
}
