/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/30 21:58:36 by sdunckel          #+#    #+#             */
/*   Updated: 2020/06/30 22:57:57 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

#define PRINT(value) (std::cout << value << std::endl);

int main() {
  Bureaucrat Denis("Denis", 2);
  
  PRINT(Denis);
  try {
    Bureaucrat Michel("Michel", 156);
  }
  catch (std::exception &e) {
    PRINT(e.what());
  };
  
  try
  {
    Denis.Promote();
    Denis.Promote();
  }
  catch (std::exception &e)
  {
    PRINT(e.what());
  }
}
