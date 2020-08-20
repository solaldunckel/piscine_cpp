/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 11:14:43 by sdunckel          #+#    #+#             */
/*   Updated: 2020/08/20 16:18:03 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main() {
  Span sp = Span(5);

  sp.addNumber(5);
  sp.addNumber(3);
  sp.addNumber(17);
  sp.addNumber(9);
  sp.addNumber(11);
  try
  {
    sp.addNumber(11);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << sp.shortestSpan() << std::endl;
  std::cout << sp.longestSpan() << std::endl;

  Span sp2 = Span(10000);
  std::vector<int> test;

  int i = 0;
  while (i < 10000)
  {
    test.push_back(i * i);
    i++;
  }

  try
  {
    sp2.addMultipleNumbers(test.begin(), test.end());
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }

  std::cout << sp2.shortestSpan() << std::endl;
  std::cout << sp2.longestSpan() << std::endl;
}
