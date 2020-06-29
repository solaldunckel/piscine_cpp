/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 11:22:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/29 13:15:21 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		// Constructors & Deconstructors
		MateriaSource();
		MateriaSource(const MateriaSource &copy);
		~MateriaSource();

		// Operators
		MateriaSource &operator=(const MateriaSource &copy);

		// Functions
		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
	private:
		AMateria			*_materias[4];
		static const int	_maxMateria = 4;
		int					_num;
};

#endif
