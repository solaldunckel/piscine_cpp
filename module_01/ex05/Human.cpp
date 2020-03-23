/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:56:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 18:51:33 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{}

Brain	&Human::getBrain()
{
	return (this->_brain);
}

std::string		Human::identify()
{
	return (this->_brain.identify());
}
