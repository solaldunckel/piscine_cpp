/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 11:38:28 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:47:49 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
    NinjaTrap();
		NinjaTrap(std::string name);
		~NinjaTrap();
		NinjaTrap(const NinjaTrap &copy);
		NinjaTrap &operator=(const NinjaTrap &copy);

		std::string	getName() const;

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
		void ninjaShoebox(const FragTrap &target);
		void ninjaShoebox(const ScavTrap &target);
		void ninjaShoebox(const NinjaTrap &target);
};

#endif
