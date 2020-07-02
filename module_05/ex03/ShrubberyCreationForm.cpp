/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 17:33:10 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

/*
** Constructors & Deconstructors
*/

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
                      : Form("ShrubberyCreationForm", 137, 145) {
  this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

ShrubberyCreationForm  &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy) {
  (void)copy;
  return (*this);
}

/*
** Functions
*/

void ShrubberyCreationForm::action() const {
  std::ofstream file;

  file.open(this->getTarget() + "_shrubbery", std::ofstream::app);
  file << "Trees" << std::endl;
  file.close();
}
