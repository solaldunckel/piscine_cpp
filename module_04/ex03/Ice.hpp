/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 15:30:01 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Ice : public AMateria
{
	public:
		// Constructors & Deconstructors
		Ice();
		Ice(const Ice &copy);
		virtual ~Ice();

		// Operators
		Ice &operator=(const Ice &copy);

		// Functions
		void		use(ICharacter& target);
		AMateria	*clone() const;
};

#endif
