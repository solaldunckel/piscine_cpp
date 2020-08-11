#include <iostream>
#include <string>

template <typename T>
void iter(T *array, size_t size, void (*f)(T const &)) {
  if (size == 0 || !f)
    return;
  for (size_t i = 0; i < size; i++) {
    f(array[i]);
  }
}

template <typename T>
void write(T const &it) {
  std::cout << it << std::endl;
}

int main() {
  // string array
  std::string test[] = {"hello mon gars", "yo"};
  iter(test, 2, write);

  // int array
  int testI[] = {2, 8, 4, 6};
  iter(testI, 4, write);
}