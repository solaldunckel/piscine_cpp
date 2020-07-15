/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 15:30:06 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <iostream>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		// Constructors & Deconstructors
		Cure();
		Cure(const Cure &copy);
		virtual ~Cure();

		// Operators
		Cure &operator=(const Cure &copy);

		// Functions
		void use(ICharacter& target);
		AMateria	*clone() const;
};

#endif
