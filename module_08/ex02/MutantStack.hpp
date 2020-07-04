/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdunckel <sdunckel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 12:16:45 by sdunckel          #+#    #+#             */
/*   Updated: 2020/07/04 12:34:27 by sdunckel         ###   ########.fr       */
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
  virtual ~MutantStack() {};

  typedef typename std::vector<T>::iterator iterator;

  iterator begin() {
    return std::begin(this->c);
  }

  iterator end() {
    return std::end(this->c);
  }
};

#endif
