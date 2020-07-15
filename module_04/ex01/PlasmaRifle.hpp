/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/10 16:20:19 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		// Constructors & Deconstructors
		PlasmaRifle();
		PlasmaRifle(const PlasmaRifle &copy);
		virtual ~PlasmaRifle();

		// Operators
		PlasmaRifle &operator=(const PlasmaRifle &copy);

		//
		void	attack() const;
	// private:
};

#endif
