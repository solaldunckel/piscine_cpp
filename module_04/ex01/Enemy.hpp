/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 13:30:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/11 15:18:08 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
	public:
		// Constructors & Deconstructors
		Enemy();
		Enemy(int hp, std::string const &type);
		Enemy(const Enemy &copy);
		virtual ~Enemy();

		// Operators
		Enemy &operator=(const Enemy &copy);

    std::string getType() const;
		int 			getHP() const;
    void 			setHP(int hp);
		virtual void	takeDamage(int damage);

	protected:
		int			_hp;
		std::string	_type;
};

#endif
