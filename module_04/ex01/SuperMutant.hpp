/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:32:38 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/19 15:34:49 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		// Constructors & Deconstructors
		SuperMutant();
		SuperMutant(const SuperMutant &copy);
		~SuperMutant();

		// Operators
		SuperMutant &operator=(const SuperMutant &copy);

		void	takeDamage(int damage);
};

#endif
