/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:27:55 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/02 12:02:43 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

/*
** Constructors & Deconstructors
*/

Intern::Intern() {
}

Intern::~Intern() {
}

Intern::Intern(const Intern &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

Intern  &Intern::operator=(const Intern &copy) {
  (void)copy;
  return (*this);
}

/*
** Functions
*/

Form *Intern::Robotomy(std::string const &target) {
  return new RobotomyRequestForm(target);
}

Form *Intern::Shrubbery(std::string const &target) {
  return new ShrubberyCreationForm(target);
}

Form *Intern::Presidential(std::string const &target) {
  return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string const &form, std::string const &target) {
  typedef Form* (Intern::*MakeForm)(std::string const &str);
	MakeForm fct[4] = {
		&Intern::Robotomy,
		&Intern::Presidential,
    &Intern::Shrubbery,
	};
  std::string formNames[] = {"RobotomyRequestForm",
                              "PresidentialPardonForm",
                              "ShrubberyCreationForm"};

  for (int i = 0; i < 3; i++) {
    if (form == formNames[i]) {
      return (this->*(fct[i]))(target);
    }
  }
  std::cout << "Form unknown" << std::endl;
  return NULL;
}
