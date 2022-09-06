#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
  i64 a, b;
  cin >> a >> b;
  if (a == b) {
    for (i64 i = 0; i < b; i++) {
      i64 x;
      cin >> x;
    }
    cout << "too late" << endl;
  } else {
    bool rooms[a];
    for (i64 i = 0; i < a; i++) {
      rooms[i] = false;
    }

    for (i64 i = 0; i < b; i++) {
      i64 x;
      cin >> x;
      rooms[x - 1] = true;
    }

    for (i64 i = 0; i < a; i++) {
      if (!rooms[i]) {
        cout << i + 1 << endl;
        break;
      }
    }
  }
  return 0;
}