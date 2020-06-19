/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/19 15:22:21 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	public:
		// Constructors & Deconstructors
		AWeapon();
		AWeapon(std::string const &name, int apcost, int damage);
		AWeapon(const AWeapon &copy);
		~AWeapon();

		// Operators
		AWeapon &operator=(const AWeapon &copy);

		virtual std::string getName() const;
		int					getAPCost() const;
		int					getDamage() const;
		virtual void		attack() const = 0;
		
	protected:
		std::string	_name;
		int			_apCost;
		int			_damage;
};

#endif
