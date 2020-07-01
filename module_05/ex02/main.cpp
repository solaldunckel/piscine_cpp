/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 17:42:52 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main() {
  Bureaucrat				john("John", 1);
	ShrubberyCreationForm	shrub("cozy");
	RobotomyRequestForm		robot("Mike");
	PresidentialPardonForm	pres("Jerry Smith");

  try {
    john.executeForm(shrub);
  }
  catch (std::exception &e) {
    std::cout << "error : " << e.what() << std::endl;
  }

	john.signForm(shrub);
	john.executeForm(shrub);

	john.signForm(robot);
	john.executeForm(robot);

	john.signForm(pres);
	john.executeForm(pres);

	return (0);
}
