/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:39:37 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 15:26:57 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		// Constructors & Deconstructors
		AssaultTerminator();
		AssaultTerminator(const AssaultTerminator &copy);
		virtual ~AssaultTerminator();

		// Operators
		AssaultTerminator &operator=(const AssaultTerminator &copy);

		// Functions
		ISpaceMarine	*clone() const;
		void			battleCry() const;
		void			rangedAttack() const;
		void			meleeAttack() const;
};

#endif
