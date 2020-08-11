# include <iostream>

template<typename T>
void swap(T &lsh, T &rsh) {
  T tmp = lsh;
  lsh = rsh;
  rsh = tmp;
}

template<typename T>
T min(T &lsh, T &rsh) {
  if (lsh < rsh)
    return lsh;
  return rsh;
}

template<typename T>
T max(T &lsh, T &rsh) {
  if (lsh > rsh)
    return lsh;
  return rsh;
}

int main( void ) {
    int a = 2;
    int b = 3;

    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    std::string c = "chaine1";
    std::string d = "chaine2";
    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    return 0;
}