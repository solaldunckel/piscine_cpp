/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:27:55 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/15 18:28:30 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
  Intern  randomIntern;
  Bureaucrat bureaucrat("Tomsize", 1);
  Form*   rrf;

  rrf = randomIntern.makeForm("RobotomyRequestForm", "Bender");
  rrf->beSigned(bureaucrat);
  rrf->execute(bureaucrat);

  Bureaucrat bureaucrat2("Diplo", 25);
  Form*   rrf2;

  rrf2 = randomIntern.makeForm("ShrubberyCreationForm", "Slide");
  rrf2->beSigned(bureaucrat2);
  rrf2->execute(bureaucrat2);

  Bureaucrat bureaucrat3("Billie", 125);
  Form*   rrf3;

  rrf3 = randomIntern.makeForm("PresidentialPardonForm", "Slide");

  try {
    rrf3->beSigned(bureaucrat3);
    rrf3->execute(bureaucrat3);
  }
  catch (std::exception &e) {
    std::cout << "error: " << e.what() << std::endl;
  }

  delete rrf;
  delete rrf2;
  delete rrf3;
}

