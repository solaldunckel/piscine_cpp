/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/15 17:17:11 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <iostream>
# include <ctime>

class RobotomyRequestForm : public Form {
 public:
  // Constructors & Deconstructors
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &copy);
  virtual ~RobotomyRequestForm();

  // Operators
  RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);

  // Functions
  void action() const;
};

#endif
