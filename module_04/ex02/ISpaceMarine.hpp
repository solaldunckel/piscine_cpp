/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:41:57 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/26 19:33:53 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISPACEMARINE_HPP
# define ISPACEMARINE_HPP

# include <iostream>

class ISpaceMarine
{
	public:
		// Constructors & Deconstructors
		virtual ~ISpaceMarine() {}

		// Functions
		virtual ISpaceMarine	*clone() const = 0;
		virtual void 			battleCry() const = 0;
		virtual void			rangedAttack() const = 0;
		virtual void			meleeAttack() const = 0;
};

#endif
