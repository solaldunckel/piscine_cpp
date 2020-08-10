/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:06:37 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/21 18:52:03 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

/*
** Constructors & Deconstructors
*/

Conversion::Conversion(std::string s) {
  size_t idx;

  try {
    value_ = std::stod(s, &idx);
  }
  catch (std::exception &e) {
    impossible_ = true;
    return;
  }

  if (idx != s.length()) {
    if (s.at(idx) == 'f' && idx + 1 == s.length())
      return;
    else
      impossible_ = true;
  }
}

Conversion::~Conversion() {
}

Conversion::Conversion(const Conversion &copy) {
  *this = copy;
}

/*
** Operators Overload
*/

Conversion  &Conversion::operator=(const Conversion &copy) {
  value_ = copy.value_;
  return (*this);
}

void Conversion::toChar() {
  std::cout << "char: ";
  if (std::isnan(value_) || std::isinf(value_) || impossible_)
    std::cout << "impossible" << std::endl;
  else if (std::isprint(static_cast<char>(value_)))
    std::cout << "'" << static_cast<char>(value_) << "'" << std::endl;
  else
    std::cout << "Non displayable" << std::endl;
}

void Conversion::toInt() {
  std::cout << "int: ";
  if (std::isnan(value_) || value_ > INT_MAX || value_ < INT_MIN || impossible_) {
    std::cout << "impossible" << std::endl;
    return;
  }
  std::cout << static_cast<int>(value_) << std::endl;
}

void Conversion::toFloat() {
  std::cout << "float: ";
  if (impossible_) {
    std::cout << "impossible" << std::endl;
    return;
  }
  std::cout << std::fixed << std::setprecision(1)
    << static_cast<float>(value_) << "f" << std::endl;
}

void Conversion::toDouble() {
  std::cout << "double: ";
  if (impossible_) {
    std::cout << "impossible" << std::endl;
    return;
  }
  std::cout << std::fixed << std::setprecision(1)
    << static_cast<double>(value_) << std::endl;
}
