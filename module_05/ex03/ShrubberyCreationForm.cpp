/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/15 17:33:18 by sdunckel         ###   ########.fr       */
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy) {
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

  file.open(this->getTarget() + "_shrubbery", std::ios::trunc);
  if (file.bad())
    return;
  for (int i = 0; i < 3; i++) {
    file <<
"             /\\\n"
"            /  \\\n"
"           /++++\\\n"
"          /  ()  \\\n"
"          /      \\\n"
"         /~`~`~`~`\\\n"
"        /  ()  ()  \\\n"
"        /          \\\n"
"       /*&*&*&*&*&*&\\\n"
"      /  ()  ()  ()  \\\n"
"      /              \\\n"
"     /++++++++++++++++\\\n"
"    /  ()  ()  ()  ()  \\\n"
"    /                  \\\n"
"   /~`~`~`~`~`~`~`~`~`~`\\\n"
"  /  ()  ()  ()  ()  ()  \\\n"
"  /*&*&*&*&*&*&*&*&*&*&*&\\\n"
" /                        \\\n"
"/,.,.,.,.,.,.,.,.,.,.,.,.,.\\\n"
"           |   |";
    file << std::endl;
  }
  file.close();
}
