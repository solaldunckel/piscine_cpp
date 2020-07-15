/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 15:31:01 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

class ICharacter ;

class AMateria
{
	public:
		// Constructors & Deconstructors
		AMateria();
		AMateria(std::string const &type);
		AMateria(const AMateria &copy);
		virtual ~AMateria();

		// Operators
		AMateria &operator=(const AMateria &copy);

		// Functions
		std::string const	&getType() const; //Returns the materia type
		unsigned int		getXP() const; //Returns the Materia's XP
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);

	protected:
		unsigned int	_xp;
		std::string		_type;
};

#endif
