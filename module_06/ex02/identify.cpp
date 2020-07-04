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

int main() {
  A *baseA = new A;
  B *baseB = new B;
  C *baseC = new C;

  identify_from_pointer(baseA);
  identify_from_pointer(baseB);
  identify_from_pointer(baseC);
  identify_from_reference(*baseA);
  identify_from_reference(*baseB);
  identify_from_reference(*baseC);
}