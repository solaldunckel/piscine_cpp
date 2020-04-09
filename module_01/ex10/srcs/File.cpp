/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:41:14 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/23 00:35:35 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(char *file)
{
	this->_file.open(file);
	this->_filename = file;
}

File::~File()
{
	this->_file.close();
}

void	File::readStdin()
{
	std::string line;

	while (std::getline(std::cin, line))
		std::cout << line << std::endl;
}

void	File::error()
{
	std::cerr << "cato9tails: " << this->_filename  << ": "
		<< std::strerror(errno) << std::endl;
}

void	File::read()
{
	if (!this->_file.is_open() || !this->_file.good())
		this->error();
	else
		std::cout << this->_file.rdbuf();
}
