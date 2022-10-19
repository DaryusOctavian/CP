#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;

  if (N == 1) {
    cout << 1 << endl;
    return 0;
  }

  int nr3 = N / 3;
  N = N % 3;

  if (N == 0) {
    for (int i = 1; i <= nr3; i++) {
      cout << 3 << " ";
    }
    cout << endl;
  } else if (N == 1) {
    for (int i = 1; i <= nr3 - 1; i++) {
      cout << 3 << " ";
    }
    cout << 2 << " " << 2 << endl;
  } else {
    for (int i = 1; i <= nr3; i++) {
      cout << 3 << " ";
    }
    cout << 2 << endl;
  }

  return 0;
}