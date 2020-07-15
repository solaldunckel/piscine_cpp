/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:47 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 15:15:52 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
	public:
		// Constructors & Deconstructors
		RadScorpion();
		RadScorpion(const RadScorpion &copy);
		virtual ~RadScorpion();

		// Operators
		RadScorpion &operator=(const RadScorpion &copy);
	private:
};

#endif
