/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 22:59:24 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 23:25:56 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <fstream>
# include <ctime>
# include <sstream>

class Logger
{
	private:
		std::string		_name;
		std::ofstream	_output;
		void			logToConsole(std::string const str);
		void			logToFile(std::string const str);
		std::string		makeLogEntry(std::string const message);
	public:
		void	log(std::string const &dest, std::string const &message);
		Logger(std::string name);
		~Logger();
};

#endif
