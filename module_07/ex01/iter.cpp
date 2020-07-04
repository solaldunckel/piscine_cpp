#include <iostream>
#include <string>

template <typename T>
void iter(T array[], size_t size, void f(T&)) {
  if (size == 0 || !f)
    return;
  for (size_t i = 0; i < size; i++) {
    f(array[i]);
  }
}

void to_upper(std::string &str) {
  for (size_t i = 0; i < str.size(); i++) {
    str[i] = toupper(str[i]);
  }
}

void pow(int &i) {
  i = i * i;
}

int main() {
  // string array
  std::string test[] = {"hello mon gars", "yo"};
  iter(test, 2, to_upper);
  for(int i = 0; i < 2; i++) {
    std::cout << test[i] << std::endl;
  }

  // int array
  int testI[] = {2, 8, 4, 6};
  iter(testI, 4, pow);
  for(int i = 0; i < 4; i++) {
    std::cout << testI[i] << std::endl;
  }
}