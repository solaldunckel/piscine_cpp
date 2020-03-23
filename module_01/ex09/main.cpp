/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/22 23:11:52 by sdunckel          #+#    #+#             */
/*   Updated: 2020/03/22 23:20:50 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void)
{
	Logger	Log("output");

	Log.log("logToConsole", "test");
	Log.log("logToFile", "test2");
	Log.log("logToFile", "test3");
}
