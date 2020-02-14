/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tomsize <tomsize@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/14 19:22:20 by tomsize           #+#    #+#             */
/*   Updated: 2020/02/14 20:53:51 by tomsize          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void 	ponyOnTheStack()
{
	Pony	pony;

	std::cout << "Pony is on the stack" << std::endl;
	pony.Jump();
}

void 	ponyOnTheHeap()
{
	Pony	*pony;

	pony = new Pony;
	std::cout << "Pony is on the heap" << std::endl;
	pony->Jump();
	delete pony;
}

int 	main()
{
	ponyOnTheStack();
	ponyOnTheHeap();
	return (1);
}
