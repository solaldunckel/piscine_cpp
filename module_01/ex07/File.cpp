/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:41:14 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 11:55:09 by sdunckel         ###   ########.fr       */
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

std::string 	File::replace(std::string str, std::string search, std::string replace)
{
	size_t pos = 0;

	while ((pos = str.find(search, pos)) != std::string::npos)
	{
		str.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return (str);
}

void	File::sed(std::string search, std::string replace)
{
	std::stringstream	output;

	if (!this->_file.is_open() || !this->_file.good())
		throw "cannot open file.";
	else if (!search.length())
		throw "s1 is empty.";
	else if (!replace.length())
		throw "s2 is empty.";
	output << this->_file.rdbuf();
	this->_output.open(this->_filename + ".replace", std::ofstream::trunc);
	this->_output << this->replace(output.str(), search, replace);
}
