/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:41:14 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 11:34:06 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class File
{
	public:
		File(char *file);
		~File();

		void		sed(std::string search, std::string replace);
		std::string	replace(std::string str, std::string from, std::string to);
	private:
		std::ifstream	_file;
		std::ofstream	_output;
		std::string		_filename;
};

#endif
