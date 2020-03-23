/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 01:56:46 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 18:49:37 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{}

Brain::~Brain()
{}

std::string	Brain::identify()
{
	std::stringstream	ss;
	long				add;

	add = (long)this;
	ss << "0x" << std::uppercase << std::hex << add;
	return (ss.str());
}
