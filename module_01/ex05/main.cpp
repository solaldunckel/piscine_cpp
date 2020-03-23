/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 02:04:38 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 18:33:38 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Brain.hpp"
# include "Human.hpp"

int 	main()
{
	Human bob;

	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
