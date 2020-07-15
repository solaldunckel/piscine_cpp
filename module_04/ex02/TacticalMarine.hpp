/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:39:36 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 15:27:01 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		// Constructors & Deconstructors
		TacticalMarine();
		TacticalMarine(const TacticalMarine &copy);
		virtual ~TacticalMarine();

		// Operators
		TacticalMarine &operator=(const TacticalMarine &copy);

		// Functions
		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
	private:
};

#endif
