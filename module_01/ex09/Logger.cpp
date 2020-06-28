/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:59:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 11:53:32 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string name) : _name(name)
{
}

Logger::~Logger()
{
	if (this->_output.is_open())
		this->_output.close();
}

void	Logger::logToConsole(std::string const str)
{
	std::cout << str << std::endl;
}

void	Logger::logToFile(std::string const str)
{
	if (!this->_output.is_open())
		this->_output.open(this->_name, std::ofstream::app);
	this->_output << str << std::endl;
}

std::string	Logger::makeLogEntry(std::string const message)
{
	std::stringstream format;
	time_t		now = time(0);
	tm			*ltm = localtime(&now);

	format << std::setfill('0') << std::setw(2) << ltm->tm_mday << "/";
	format << std::setw(2) << 1 + ltm->tm_mon << "/";
	format << 1900 + ltm->tm_year << " ";
	format << std::setw(2) << ltm->tm_hour << ":";
	format << std::setw(2) << ltm->tm_min << ":";
	format << std::setw(2) << ltm->tm_sec << " ";
	format << message;
	return (format.str());
}

void	Logger::log(std::string const &dest, std::string const &message)
{
	int		actionNumber = 2;
	std::string actionStr[] = {
		"logToConsole",
		"logToFile",
	};
	typedef void (Logger::*Log)(std::string const str);
	Log actions[3] = {
		&Logger::logToConsole,
		&Logger::logToFile,
	};
	for (int i = 0; i < actionNumber; i++)
	{
		if (actionStr[i] == dest)
		{
			(this->*(actions[i]))(this->makeLogEntry(message));
			return ;
		}
	}
	std::cerr << "Invalid log action." << std::endl;
}
