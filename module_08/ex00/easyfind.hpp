#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
int &easyfind(T &container, int n) {
  typename T::iterator it = std::find(container.begin(), container.end(), n);

  if (it == container.end())
    throw std::runtime_error("element not found");

  return *it;
}

#endif