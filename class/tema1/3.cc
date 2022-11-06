#include <iostream>
#include <math.h>

using namespace std;

struct punct {
  int x, y;
} A;

struct cerc {
  punct p;
  float r;
} C;
float d;

int main() {
  cin >> A.x >> A.y;
  cin >> C.p.x >> C.p.y >> C.r;

  d = sqrt((A.x - C.p.x) * (A.x - C.p.x) + (A.y - C.p.y) * (A.y - C.p.y));

  if (d > C.r) {
    cout << "exterior\n";
  } else if (d == C.r) {
    cout << "pe cerc\n";
  } else {
    cout << "interior\n";
  }

  return 0;
}