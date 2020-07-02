#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

#define PRINT(value) (std::cout << value)

void  displayChar(char *str) {
  char c;

  PRINT("char: ");
  try {
    c = static_cast<char>(std::stoi(str));
  }
  catch (std::exception &e) {
    PRINT("impossible") << std::endl;
    return ;
  }
  if (std::isprint(c))
    std::cout << "'" << c << "'" << std::endl;
  else
    std::cout << "Non displayable" << std::endl;
}

void  displayInt(char *str) {
  int num;

  PRINT("int: ");
  try {
    num = std::stoi(str);
  }
  catch (std::exception &e) {
    PRINT("impossible") << std::endl;
    return ;
  }
  std::cout << num << std::endl;
}

void  displayFloat(char *str) {
  float num;

  PRINT("float: ");
  try {
    num = std::stof(str);
  }
  catch (std::exception &e) {
    PRINT("impossible") << std::endl;
    return ;
  }
  std::cout << std::fixed << std::setprecision(1) << num << "f" << std::endl;
}

void  displayDouble(char *str) {
  double num;

  PRINT("double: ");
  try {
    num = std::stod(str);
  }
  catch (std::exception &e) {
    PRINT("impossible") << std::endl;
    return ;
  }
  std::cout << std::fixed << std::setprecision(1) << num << std::endl;
}

int main(int argc, char **argv) {
  if (argc != 2)
    return 1;
  else {
    displayChar(argv[1]);
    displayInt(argv[1]);
    displayFloat(argv[1]);
    displayDouble(argv[1]);
  }
}