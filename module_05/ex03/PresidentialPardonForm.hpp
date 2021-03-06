/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/12 22:23:31 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <iostream>

class PresidentialPardonForm : public Form {
 public:
  // Constructors & Deconstructors
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &copy);
  virtual ~PresidentialPardonForm();

  // Operators
  PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);

  // Functions
  void action() const;
};

#endif
