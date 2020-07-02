/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 17:32:49 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

/*
** Constructors & Deconstructors
*/

RobotomyRequestForm::RobotomyRequestForm(std::string target)
  : Form("RobotomyRequestForm", 45, 72) {
  this->setTarget(target);
  srand(time(0));
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

RobotomyRequestForm  &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy) {
  (void)copy;
  return (*this);
}

/*
** Functions
*/

void RobotomyRequestForm::action() const {
  if (rand() % 2 == 0) {
    std::cout << "*** DRILL NOISE ***" << std::endl;
    std::cout << this->getTarget() << " has been robotomized." << std::endl;
  }
  else
    std::cout << "Robotomization failure." << std::endl;
}
