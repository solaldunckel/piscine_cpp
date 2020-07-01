/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:32:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 17:01:46 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

/*
** Constructors & Deconstructors
*/

Form::Form() : grade_required_(1), grade_to_sign_(1) {
}

Form::Form(std::string name, int grade_required, int grade_to_sign)
  : name_(name), grade_required_(grade_required), grade_to_sign_(grade_to_sign) {
    if (grade_required > 150 || grade_to_sign > 150)
      throw Form::GradeTooLowException();
    else if (grade_required < 1 || grade_to_sign < 1)
      throw Form::GradeTooHighException();
    signed_ = false;
}

Form::~Form() {
}

Form::Form(const Form &copy) : grade_required_(copy.gradeRequired()),
                                grade_to_sign_(copy.gradeToSign()) {
  *this = copy;
}

/*
** Operators Overload
*/

Form  &Form::operator=(const Form &copy) {
  signed_ = copy.signed_;
  return (*this);
}

/*
** Functions
*/

const char *Form::GradeTooHighException::what() const throw() {
  return "grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {
  return "grade too low";
}

const char *Form::NotSigned::what() const throw() {
  return "form not signed";
}

std::string Form::getName() const {
  return name_;
}

bool Form::isSigned() {
  return signed_;
}

int Form::gradeRequired() const {
  return grade_required_;
}

int Form::gradeToSign() const {
  return grade_to_sign_;
}

void Form::beSigned(const Bureaucrat &b) {
  if (b.getGrade() > grade_to_sign_) {
    throw Form::GradeTooLowException();
  }
  else
    signed_ = true;
}

void Form::execute(const Bureaucrat &b) const {
  if (b.getGrade() > grade_required_) {
    throw Form::GradeTooLowException();
  } else if (signed_ == false) {
    throw Form::NotSigned();
  }
  else
    this->action();
}

void Form::setTarget(std::string &target) {
  target_ = target;
}

std::string Form::getTarget() const {
  return target_;
}

std::ostream &operator<<(std::ostream &out, Form const &in) {
  return (out << in.getName() << " form - grade required : " << in.gradeRequired()
    << " - grade to sign : " << in.gradeToSign());
}



