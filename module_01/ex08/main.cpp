/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:43:00 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 22:45:08 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void)
{
	Human Bob;

	Bob.action("meleeAttack", "Denis");
	Bob.action("rangedAttack", "Denis");
	Bob.action("intimidatingShout", "Denis");
	Bob.action("Fireball", "Denis");
}
