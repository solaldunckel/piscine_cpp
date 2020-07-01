/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:32:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 11:33:42 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  try
	{
		Form	f24b("24B", 24, 0);
		std::cout << f24b << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << "error : " << e.what() << std::endl;
	}

	Form		f24b("24B", 24, 1);
	Bureaucrat	john("John", 10);
	Bureaucrat	mike("Mike", 50);

	std::cout << f24b << std::endl;
	mike.signForm(f24b);
	std::cout << f24b << std::endl;
	john.signForm(f24b);
	std::cout << f24b << std::endl;
	return (0);
}
