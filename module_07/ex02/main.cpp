/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 17:00:12 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/04 13:44:05 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
  std::cout << "Array of integer : " << std::endl;
  Array <int> test((unsigned int)8);
  for (int i = 0; i < test.size(); i++) {
    test[i] = i*i;
    std::cout << test[i] << std::endl;
  }

  std::cout << "\nArray of strings : " << std::endl;
  Array <std::string> test2((unsigned int)2);

  test2[0] = "Hey";
  test2[1] = "My Dude";

  for (int i = 0; i < test2.size(); i++) {
      std::cout << test2[i] << std::endl;
  }
  
  std::cout << "\nCatching exception : " << std::endl;
  try {
    for (int i = 0; i < 4; i++) {
      std::cout << test2[i] << std::endl;
    }
  }
  catch (std::exception &e) {
    std::cout << "error: " << e.what() << std::endl;
  }

  std::cout << "\nCopy assignement (int array) : " << std::endl;
  Array <int>copy = test;
  for (int i = 0; i < copy.size(); i++) {
    std::cout << copy[i] << std::endl;
  }

  std::cout << "\nCopy constructor (string array) : " << std::endl;
  Array <std::string>ass(test2);
  for (int i = 0; i < ass.size(); i++) {
    std::cout << ass[i] << std::endl;
  }
}
