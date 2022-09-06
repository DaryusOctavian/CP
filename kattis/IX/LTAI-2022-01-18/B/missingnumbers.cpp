#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, propNum = 0;
  bool done = false;
  cin >> n;
  for (i64 i = 0; i < n; i++) {
    i64 x;
    cin >> x;

    while (propNum < x - 1) {
      propNum++;
      cout << propNum << endl;
      done = true;
    }

    propNum = x;
  }

  if (!done) {
    cout << "good job" << endl;
  }
  return 0;
}
