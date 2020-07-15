/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 14:06:42 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/15 17:55:16 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include "Bureaucrat.hpp"

# include <iostream>
# include <fstream>

class ShrubberyCreationForm : public Form {
 public:
  // Constructors & Deconstructors
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &copy);
  virtual ~ShrubberyCreationForm();

  // Operators
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);

  // Functions
  void action() const;

 private:
  static std::string const Trees[];
};

#endif
