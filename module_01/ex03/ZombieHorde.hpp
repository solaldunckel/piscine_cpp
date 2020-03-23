/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:17:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/19 01:46:42 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
	private:
		int		_num;
		Zombie	*_horde;
	public:
		ZombieHorde(int num);
		~ZombieHorde();
		void		announce();
		std::string	randomChump();
};

#endif
