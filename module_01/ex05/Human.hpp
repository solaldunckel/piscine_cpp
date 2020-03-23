/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:56:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 18:49:09 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include "Brain.hpp"

class Human
{
	private:
		Brain	_brain;
	public:
		Human();
		~Human();
		Brain			&getBrain();
		std::string		identify();
};

#endif
