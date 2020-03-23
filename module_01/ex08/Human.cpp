/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:21:34 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 22:55:48 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const &target)
{
	std::cout << "Using a melee attack on " << target << std::endl;
}

void	Human::rangedAttack(std::string const &target)
{
	std::cout << "Using a ranged attack on " << target << std::endl;
}

void	Human::intimidatingShout(std::string const &target)
{
	std::cout << "Using Intimidating Shout on " << target << std::endl;
}

void	Human::action(std::string const &action_name, std::string const &target)
{
	int		actionNumber = 3;
	std::string actionStr[] = {
		"meleeAttack",
		"rangedAttack",
		"intimidatingShout"
	};
	typedef void (Human::*Actions)(std::string const &target);
	Actions actions[3] = {
		&Human::meleeAttack,
		&Human::rangedAttack,
		&Human::intimidatingShout
	};

	for (int i = 0; i < actionNumber; i++)
	{
		if (actionStr[i] == action_name)
		{
			(this->*(actions[i]))(target);
			return ;
		}
	}
	std::cerr << "Unknown action." << std::endl;
}
