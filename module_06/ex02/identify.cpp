#include <iostream>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base *p) {
  if(A* d = dynamic_cast<A*>(p))
    std::cout << "A" << std::endl;
  else if (B* d = dynamic_cast<B*>(p))
    std::cout << "B" << std::endl;
  else if (C* d = dynamic_cast<C*>(p))
    std::cout << "C" << std::endl;
}

void identify_from_reference(Base &p) {
  try {
    A &d = dynamic_cast<A&>(p);
    (void)d;
    std::cout << "A" << std::endl;
  }
  catch (std::exception &e) {}
  try {
    B &d = dynamic_cast<B&>(p);
    (void)d;
    std::cout << "B" << std::endl;
  }
  catch (std::exception &e) {}
  try {
    C &d = dynamic_cast<C&>(p);
    (void)d;
    std::cout << "C" << std::endl;
  }
  catch (std::exception &e) {}
}

Base *generate(void) {
  int randBase = rand() % 3;
  if (randBase == 0)
    return (new A);
  else if (randBase == 1)
    return (new B);
  else
    return (new C);
}

int main() {
  srand(time(NULL));
  Base *baseA = generate();
  Base *baseB = generate();
  Base *baseC = generate();

  identify_from_pointer(baseA);
  identify_from_pointer(baseB);
  identify_from_pointer(baseC);
  identify_from_reference(*baseA);
  identify_from_reference(*baseB);
  identify_from_reference(*baseC);
  delete baseA;
  delete baseB;
  delete baseC;
}