#include "easyfind.hpp"
#include <vector>

int main() {
  std::vector<int> myvector;
  for (int i = 0; i < 5; i++)
    myvector.push_back(i);
  try
  {
    easyfind(myvector, 8);
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}