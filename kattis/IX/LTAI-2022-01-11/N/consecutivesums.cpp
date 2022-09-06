#include <iostream>

using namespace std;

typedef int64_t i64;

void printer(i64 a, i64 b, i64 x) {
  cout << x << " = ";
  for (i64 i = a; i < b; i++) {
    cout << i << " + ";
  }
  cout << b << endl;
}

int main() {
  i64 k;
  cin >> k;
  for (i64 k1 = 0; k1 < k; k1++) {
    i64 n;
    cin >> n;
    i64 min = 9999999999;
    i64 start = -1, stop;
    for (i64 i = 2; i * i <= 2 * n; i++) {
      if (2 * n % i == 0) {
        i64 x = (((2 * n) / i) - i + 1) / 2;
        i64 sum = 0, temp = x;
        while (sum < n) {
          sum += temp;
          temp++;
        }

        if (sum == n) {
          if (temp - 1 - x < min) {
            start = x;
            stop = temp - 1;
            min = stop - start;
          }
          // break;
        }
      }

      if (2 * n % i == 0) {
        i64 yeet = n / i;
        i64 x = (((2 * yeet) / i) - i + 1) / 2;
        i64 sum = 0, temp = x;
        while (sum < n) {
          sum += temp;
          temp++;
        }

        if (sum == n) {
          if (temp - 1 - x < min) {
            start = x;
            stop = temp - 1;
            min = stop - start;
          }
          // break;
        }
      }
    }

    if (start == 0) {
      start = 1;
    }

    if (start == -1) {
      cout << "IMPOSSIBLE" << endl;
    } else {
      printer(start, stop, n);
    }
  }
  return 0;
}