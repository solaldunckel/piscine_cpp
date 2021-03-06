/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 10:32:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/12 22:01:44 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Bureaucrat ;

class Form {
 public:
  // Constructors & Deconstructors
  Form(std::string name, int grade_required, int grade_to_sign);
  Form(const Form &copy);
  ~Form();

  // Operators
  Form &operator=(const Form &copy);

  // Functions
  std::string getName() const;
  bool isSigned() const;
  int gradeRequired() const;
  int gradeToSign() const;
  void beSigned(const Bureaucrat &b);

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw();
  };

  class AlreadySignedException : public std::exception {
   public:
    const char *what() const throw();
  };

 private:
  Form();
  const std::string name_;
  bool signed_;
  const int grade_required_;
  const int grade_to_sign_;
};

std::ostream &operator<<(std::ostream &out, Form const &in);

#endif
