/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 19:41:14 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/28 17:58:28 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
# define FILE_HPP

# include <iostream>
# include <fstream>
# include <sstream>
# include <cstring>

# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

class File
{
	private:
		std::ifstream	_file;
		std::string		_filename;
		bool			_isdir;
	public:
		File(char *file);
		~File();
		static void			readStdin();
		void				error();
		int					read();
};

#endif
