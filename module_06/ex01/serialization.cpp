#include <iostream>

struct Data {
  std::string s1;
  int n;
  std::string s2;
};

char randAlphanumericChar() {
  const char charset[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";

  return charset[rand() % (sizeof(charset) - 1)];
};

void *serialize(void) {
  char array1[8];
  char array2[8];
  int n = rand();

  char byte[4];

  byte[0] = (n >> 24) & 0xFF;
  byte[1] = (n >> 16) & 0xFF;
  byte[2] = (n >> 8) & 0xFF;
  byte[3] = n & 0xFF;

  for (int i = 0; i < (int)sizeof(array1); i++) {
    array1[i] = randAlphanumericChar();
    array2[i] = randAlphanumericChar();
  }

  char *mem = new char[sizeof(array1) + sizeof(n) + sizeof(array2)];

  int j = 0;
  for (int i = 0; i < (int)sizeof(array1); i++) {
    mem[j] = array1[i];
    j++;
  }

  *reinterpret_cast<int *>(mem + sizeof(array1)) = std::rand();
  j += sizeof(n);

  for (int i = 0; i < (int)sizeof(array2); i++) {
    mem[j] = array2[i];
    j++;
  }

  return mem;
}

Data *deserialize(void *raw) {
  Data *data = new Data;

	data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
	data->n = *reinterpret_cast<int *>(static_cast<char*>(raw) + 8);
	data->s2 = std::string(reinterpret_cast<char *>(static_cast<char*>(raw)
    + 8 + sizeof(int)), 8);

  return data;
}

int main() {
  void *p;
  Data *d;

  srand(time(0));
  p = serialize();
  d = deserialize(p);

  std::cout << d->s1 << " " << d->n << " " << d->s2 << std::endl;
  delete static_cast<char*>(p);
  delete d;
}