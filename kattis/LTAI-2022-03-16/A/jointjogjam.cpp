#include <iostream>
#include <math.h>
#include <utility>

using namespace std;

typedef int64_t i64;
typedef long double d6;

int main() {
  pair<i64, i64> ik, io, fk, fo;
  cin >> ik.first >> ik.second >> io.first >> io.second >> fk.first >>
      fk.second >> fo.first >> fo.second;
  d6 res = 0;
  res = sqrt(pow(ik.first - io.first, 2) + pow(ik.second - io.second, 2));
  d6 x = sqrt(pow(fk.first - fo.first, 2) + pow(fk.second - fo.second, 2));
  if (x > res)
    res = x;
  cout.precision(8);
  cout << fixed;
  cout << res << endl;
  return 0;
}
