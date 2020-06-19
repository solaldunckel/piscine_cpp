/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/26 09:40:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/17 13:00:13 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>

class ScavTrap
{
	private:
		std::string 	_name;
		unsigned int	_hp;
		unsigned int	_maxHp;
		unsigned int	_energy;
		unsigned int	_maxEnergy;
		unsigned int	_level;
		unsigned int	_meleeDamage;
		unsigned int	_rangedDamage;
		unsigned int	_armorReduction;
	public:
		ScavTrap(std::string name);
		~ScavTrap();
		ScavTrap(const ScavTrap &copy);
		ScavTrap &operator=(const ScavTrap &copy);

		void rangedAttack(std::string const &target);
		void meleedAttack(std::string const &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const &target);
};

#endif
