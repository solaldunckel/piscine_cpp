/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 17:32:46 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

/*
** Constructors & Deconstructors
*/

PresidentialPardonForm::PresidentialPardonForm(std::string target)
  : Form("PresidentialPardonForm", 5, 25) {
    this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

PresidentialPardonForm  &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy) {
  (void)copy;
  return (*this);
}

void PresidentialPardonForm::action() const {
  std::cout << this->getTarget()
    << " has been pardonned by Zafod Beeblebrox." << std::endl;
}