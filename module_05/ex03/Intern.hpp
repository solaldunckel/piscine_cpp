/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:27:55 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/02 12:02:29 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

# include <iostream>

class Intern {
 public:
  // Constructors & Deconstructors
  Intern();
  Intern(const Intern &copy);
  ~Intern();

  // Operators
  Intern &operator=(const Intern &copy);

  // Functions
  Form *Robotomy(std::string const &target);
  Form *Shrubbery(std::string const &target);
  Form *Presidential(std::string const &target);
  
  Form *makeForm(std::string const &form, std::string const &target);
};

#endif
