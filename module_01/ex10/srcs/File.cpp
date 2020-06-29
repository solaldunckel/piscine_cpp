/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:41:14 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 18:00:23 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File(char *file)
{
	int		fd = open(file, O_DIRECTORY);

	this->_file.open(file);
	this->_filename = file;
	if (fd == -1)
		this->_isdir = true;
	else
		this->_isdir = false;
	close(fd);
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
	std::cerr << "cato9tails: " << this->_filename  << ": ";
	if (!_isdir)
		std::cerr << "Is a directory";
	else
		std::cerr << std::strerror(errno);
	std::cerr << std::endl;
}

int		File::read()
{
	if (!this->_file.is_open() || !this->_file.good() || !_isdir)
	{
		this->error();
		return 1;
	}
	else
		std::cout << this->_file.rdbuf();
	return 0;
}
