/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 21:58:36 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/01 11:05:32 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"

# include <iostream>
# include <stdexcept>

class Bureaucrat {
 public:
  // Constructors & Deconstructors
  Bureaucrat();
  Bureaucrat(std::string name, int grade);
  Bureaucrat(const Bureaucrat &copy);
  ~Bureaucrat();

  // Operators
  Bureaucrat &operator=(const Bureaucrat &copy);

  // Functions
  std::string getName() const;
  int getGrade() const;
  void Promote();
  void Relegate();

  class GradeTooHighException : public std::exception {
   public:
    const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
   public:
    const char *what() const throw();
  };

 private:
  const std::string name_;
  int grade_;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &in);

#endif
