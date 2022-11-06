#include <iostream>

using namespace std;

struct Elev {
  char nume[64];
  float nota1, nota2, media;
};

int main() {
  Elev x;
  x.media = 9.5;

  return 0;
}