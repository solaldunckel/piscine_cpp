/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 12:16:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/08/20 16:49:12 by sdunckel         ###   ########.fr       */
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

  using std::stack<T>::operator =;

  typedef typename std::stack<T>::container_type::iterator iterator;

  iterator begin() {
    return std::begin(this->c);
  }

  iterator end() {
    return std::end(this->c);
  }
};

#endif
