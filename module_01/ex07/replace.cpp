/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:34:37 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 12:53:19 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include "File.hpp"

int		main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "replace: usage: FILENAME s1 s2." << std::endl;
		return (1);
	}
	File	file(argv[1]);

	try
	{
		file.sed(argv[2], argv[3]);
	}
	catch(char const *error)
	{
		std::cerr << "replace: error: " << error << std::endl;
		return (1);
	}
	return (0);
}
