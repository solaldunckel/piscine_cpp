/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/29 13:14:58 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "ICharacter.hpp"
// # include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		// Constructors & Deconstructors
		Character();
		Character(std::string name);
		Character(const Character &copy);
		~Character();

		// Operators
		Character &operator=(const Character &copy);

		// Functions
		std::string const	&getName() const;
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
	private:
		std::string			_name;
		AMateria			*_inventory[4];
		static const int	_maxInventorySize = 4;
};

#endif
