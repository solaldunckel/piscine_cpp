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

  const size_t max_index = (sizeof(charset) - 1);
    return charset[ rand() % max_index ];
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

  char *mem;
  mem = new char[sizeof(array1) + sizeof(array2) + sizeof(n)];

  int j = 0;
  for (int i = 0; i < (int)sizeof(array1); i++) {
    mem[j] = array1[i];
    j++;
  }
  for (int i = 0; i < (int)sizeof(n); i++) {
    mem[j] = byte[i];
    j++;
  }
  for (int i = 0; i < (int)sizeof(array2); i++) {
    mem[j] = array2[i];
    j++;
  }
  return mem;
}

Data *deserialize(void *raw) {
  Data *data = new Data;
  char s[9];

  memcpy(&s, raw, 8);
  s[8] = 0;
  data->s1 = s;
  raw = static_cast<char*>(raw) + 8;
  memcpy(&data->n, raw, 4);
  raw = static_cast<char*>(raw) + 4;
  memcpy(&s, raw, 8);
  s[8] = 0;
  data->s2 = s;
  return data;
}

int main() {
  void *p;
  Data *d;

  srand(time(0));
  p = serialize();
  d = deserialize(p);

  std::cout << d->s1 << " " << d->n << " " << d->s2 << std::endl;
}