/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/15 15:58:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:48:52 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include "NinjaTrap.hpp"

class SuperTrap: public FragTrap, public NinjaTrap
{
	public:
		SuperTrap(std::string name);
		~SuperTrap();

		SuperTrap(const SuperTrap &copy);
		SuperTrap &operator=(const SuperTrap &copy);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
};

#endif
