/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/06 18:42:03 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/16 19:42:52 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>

#include "Contact.hpp"

void 	search_contact(Contact *phoneBook, int num)
{
	int		finished;

	if (num == 0)
	{
		std::cout << "No contact in the phonebook." << std::endl;
		return ;
	}

	std::cout << std::setw(10) << "INDEX" << "|";
	std::cout << std::setw(10) << "NAME" << "|";
	std::cout << std::setw(10) << "LAST NAME" << "|";
	std::cout << std::setw(10) << "NICKNAME" << std::endl;

	for (int i = 0; i < num; i++)
	{
		phoneBook[i].showSnippet();
		std::cout << std::endl;
	}

	std::string index;
	finished = 0;
	while (!finished)
	{
		std::cout << ">> Type an index: ";
		std::getline(std::cin, index);
		if (index[0] == 0)
			std::cout << "Error : index needs to be between 0 and " << num - 1 << std::endl;
		for (int i = 0; index[i]; i++)
		{
			if (!isdigit(index[i]))
			{
				std::cout << "Error : index needs to be between 0 and " << num - 1 << std::endl;
				break ;
			}
			else if (index[i + 1] == 0)
			{
				int		n = std::stoi(index);
				if (n < num)
				{
					phoneBook[n].showFull();
					finished = 1;
				}
				else
					std::cout << "Error : index needs to be between 0 and " << num - 1 << std::endl;
			}
		}
	}
}

int Contact::counter = 0;

int		main()
{
	Contact		phoneBook[8];
	int			i = 0;
	std::string cmd;

	while (1)
	{
		std::cout << ">> ";
		std::getline(std::cin, cmd);
		if (cmd.compare("EXIT") == 0)
			break;
		else if (cmd.compare("ADD") == 0)
		{
			if (i < 8)
				phoneBook[i++].create();
			else
				std::cout << "No more storage." << std::endl;
		}
		else if (cmd.compare("SEARCH") == 0)
			search_contact(phoneBook, i);
		else
			std::cout << "Wront input :( Usage : ADD, SEARCH or EXIT" << std::endl;
	}
	return (0);
}
