#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 a[n];
  i64 b[n - 1];
  for (i64 i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (i64 i = 0; i < n - 1; i++) {
    cin >> b[i];
  }

  for (i64 i = 0; i < n; i++) {
    bool found = false;
    for (i64 j = 0; j < n - 1; j++) {
      if (a[i] == b[j]) {
        found = true;
      }
    }

    if (!found) {
      cout << a[i] << endl;
      break;
    }
  }
  return 0;
}