/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/21 17:06:37 by sdunckel          #+#    #+#             */
/*   Updated: 2020/08/10 18:11:54 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
# define CONVERSION_HPP

# include <iostream>
# include <sstream>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits.h>

class Conversion {
 public:
  // Constructors & Deconstructors
  Conversion(std::string s);
  Conversion(const Conversion &copy);
  ~Conversion();

  // Operators
  Conversion &operator=(const Conversion &copy);

  void toChar();
  void toInt();
  void toFloat();
  void toDouble();

  bool isNumber(const std::string &s);

 private:
  bool impossible_;
  long double value_;
};

#endif
