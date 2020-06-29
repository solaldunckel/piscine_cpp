/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 18:39:36 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 18:30:34 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
		// Constructors & Deconstructors
		Squad();
		Squad(const Squad &copy);
		~Squad();

		// Operators
		Squad &operator=(const Squad &copy);

		// Functions
		int				getCount() const;
		ISpaceMarine	*getUnit(int) const;
		int				push(ISpaceMarine*);
		void			deleteUnits();
		void			copyUnits(const Squad &copy);
	private:
		typedef struct	s_list
		{
			ISpaceMarine	*unit;
			struct s_list	*next;
		}				t_list;

		t_list			*_units;
		int				_count;
};

#endif
