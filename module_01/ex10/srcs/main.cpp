/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 23:46:29 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/23 00:34:46 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"
#include <fcntl.h>

int fd_is_valid(int fd)
{
	return (fcntl(fd, F_GETFD) != -1 || errno != EBADF);
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		if (fd_is_valid(0))
			File::readStdin();
		else
			std::cerr << "cato9tails: stdin: Bad file descriptor" << std::endl;
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			File	*file;

			file = new File(argv[i]);
			file->read();
			delete file;
		}
	}
	return (0);
}
