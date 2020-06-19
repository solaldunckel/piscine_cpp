/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:47 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/19 16:54:19 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <iomanip>
# include <sstream>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
		// Constructors & Deconstructors
		Character();
		Character(std::string const &name);
		Character(const Character &copy);
		~Character();

		// Operators
		Character &operator=(const Character &copy);

		void		recoverAP();
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName() const;
		int			getAP() const;
		AWeapon		*getWeapon() const;

	private:
		std::string _name;
		int			_ap;
		AWeapon		*_weapon;
};

std::ostream	&operator<<(std::ostream &out, Character const &character);


#endif
