/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 21:58:36 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 11:57:58 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/*
** Constructors & Deconstructors
*/

Bureaucrat::Bureaucrat() {
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name_(name) {
  if (grade > 150)
    throw Bureaucrat::GradeTooLowException();
  else if (grade < 1)
    throw Bureaucrat::GradeTooHighException();
  grade_ = grade;
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &copy) {
  grade_ = copy.getGrade();
  return (*this);
}

/*
** Functions
*/

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "error: Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "error: Grade too low";
}

std::string Bureaucrat::getName() const {
  return name_;
}

int Bureaucrat::getGrade() const {
  return grade_;
}

void Bureaucrat::Promote() {
  if (grade_ == 1)
    throw Bureaucrat::GradeTooHighException();
  grade_--;
}

void Bureaucrat::Relegate() {
  if (grade_ == 150)
    throw Bureaucrat::GradeTooHighException();
  grade_++;
}

void Bureaucrat::signForm(Form &form) {
  try {
    form.beSigned(*this);
    std::cout << name_ << " signs " << form.getName() << std::endl;
  }
  catch (std::exception &e) {
    std::cout << name_ << " cannot sign " << form.getName() << " because "
      << e.what() << std::endl;
  }
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in) {
  return (out << in.getName() << ", bureaucrat grade " << in.getGrade());
}
