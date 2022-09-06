#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {

  i64 n;
  cin >> n;
  while (n != 0) {
    i64 k = n - 3;
    // se divide macar cu el insusi
    i64 res = k;
    // cauta divizori lui n - 3
    for (i64 i = 2; i * i <= k; i++) {
      if (k % i == 0) {
        if (i > 3) {
          res = min(res, i);
        } else if (k / i > 3) {
          res = min(res, k / i);
        }
      }
    }
    if (res > 3) {
      cout << res << endl;
    } else {
      if (n == 3) { // solutia este 4 in acest caz
        cout << 4 << endl;
      } else {
        cout << "No such base" << endl;
      }
    }
    cin >> n; // urmatorul numar
  }
}

// solutie Romulus Pasca
