#include "easyfind.hpp"
#include <vector>

int main() {
  std::vector<int> myvector;
  for (int i = 0; i < 10; i++)
    myvector.push_back(i);

  try
  {
    std::cout << easyfind(myvector, 4) << std::endl;
    std::cout << easyfind(myvector, 8) << std::endl;
    std::cout << easyfind(myvector, 12) << std::endl;
  }
  catch(const std::exception& e)
  {
    std::cerr << e.what() << '\n';
  }
}