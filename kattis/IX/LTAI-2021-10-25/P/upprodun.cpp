#include <iostream>

using namespace ::std;

int main() {
  int a, b, n = 0;
  cin >> a >> b;
  while (b % a != 0) {
    b++;
    n++;
  }
  for (int i = 0; i < (a - n); i++) {
    for (int j = 0; j < (b / a); j++) {
      cout << "*";
    }
    cout << endl;
  }
  while (n > 0) {
    for (int i = 0; i < (b - 1) / a; i++) {
      cout << "*";
    }
    n--;
    cout << endl;
  }
  return 0;
}