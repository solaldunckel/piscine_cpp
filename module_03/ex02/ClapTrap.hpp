/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/27 15:05:02 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/09 16:37:44 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	protected:
		std::string		_name;
		unsigned int	_hp;
		unsigned int	_maxHp;
		unsigned int	_energy;
		unsigned int	_maxEnergy;
		unsigned int	_level;
		unsigned int	_meleeDamage;
		unsigned int	_rangedDamage;
		unsigned int	_armorReduction;
    std::string   _type;

	public:
    ClapTrap();
		ClapTrap(std::string name, int hp, int maxHp, int energy, int maxEnergy,
			int level, int meleeDamage, int rangedDamage, int armorReduction, std::string type);
		~ClapTrap();
		ClapTrap(const ClapTrap &copy);
		ClapTrap &operator=(const ClapTrap &copy);

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
