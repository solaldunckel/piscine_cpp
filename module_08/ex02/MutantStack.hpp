/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 12:16:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/09/15 19:17:53 by sdunckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <vector>

template <typename T>
class MutantStack : public std::stack<T> {
 public:
  MutantStack() : std::stack<T>() {};
  MutantStack(MutantStack &copy) : std::stack<T>(copy) {};
  virtual ~MutantStack() {};

  MutantStack &operator=(const MutantStack &other) {
    this->c = other.c;
    return *this;
  }

  typedef typename std::stack<T>::container_type::iterator iterator;

  iterator begin() {
    return std::begin(this->c);
  }

  iterator end() {
    return std::end(this->c);
  }
};

#endif
