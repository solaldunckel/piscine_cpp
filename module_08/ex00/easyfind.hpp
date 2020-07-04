#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
int &easyfind(T &container, int n) {
  typename T::iterator it = container.begin();
  while (it != container.end()) {
    if (*it == n)
      return *it;
    it++;
  }
  throw std::exception();
}

#endif