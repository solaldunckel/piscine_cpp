/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:59:51 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/26 10:40:02 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int		main(void)
{
	FragTrap	first("Solal");

	first.rangedAttack("Teha");
	first.meleedAttack("Zephyr");
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
	return (0);
}
