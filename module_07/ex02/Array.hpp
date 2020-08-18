/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/03 17:00:12 by sdunckel          #+#    #+#             */
/*   Updated: 2020/08/11 15:18:51 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>

class Array {
 public:
  // Constructors & Deconstructors
  Array() : array_(new T[0]), size_(0) {};
  Array(unsigned int n) : array_(new T[n]), size_(n) {};
  Array(const Array &copy) : array_(NULL), size_(0) {
    *this = copy;
  };
  ~Array() {
    delete [] array_;
  };

  // Operators
  Array &operator=(const Array &copy) {
    if (size_ != copy.size()) {
      if (array_)
        delete [] array_;
      size_ = copy.size_;
      array_ = new T[size_];
    }
    for (int i = 0; i < size_; i++) {
      array_[i] = copy.array_[i];
    }
    return *this;
  };
  T &operator[](int idx) {
    if (idx >= size_ || idx < 0)
        throw Array::OutOfLimit();
    return array_[idx];
  }

  // Functions
  int size() const {
    return size_;
  };

  class OutOfLimit : public std::exception {
   public:
    const char *what() const throw() { return "element ouf of array"; };
  };

 private:
  T *array_;
  int size_;
};

#endif
