/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/10 16:20:24 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
		// Constructors & Deconstructors
		PowerFist();
		PowerFist(const PowerFist &copy);
		virtual ~PowerFist();

		// Operators
		PowerFist &operator=(const PowerFist &copy);

		void	attack() const;
	private:
};

#endif
