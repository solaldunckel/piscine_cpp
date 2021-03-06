/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 01:28:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/18 01:28:43 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony()
{
	std::cout << "A Pony is born..." << std::endl;
}

Pony::~Pony()
{
	std::cout << "A Pony is gone..." << std::endl;
}

void Pony::Jump()
{
	std::cout << "Pony has jumped!" << std::endl;
}
