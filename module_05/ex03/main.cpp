/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:27:55 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/02 12:16:40 by sdunckel         ###   ########.fr       */
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
}

