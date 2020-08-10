#include "Conversion.hpp"

int main(int argc, char **argv) {
  if (argc != 2)
    return 1;
  else {
    Conversion literal(static_cast<std::string>(argv[1]));

    literal.toChar();
    literal.toInt();
    literal.toFloat();
    literal.toDouble();
  }
}