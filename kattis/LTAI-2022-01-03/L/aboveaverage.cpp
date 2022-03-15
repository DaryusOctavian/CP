#include <iostream>

using namespace std;

typedef int64_t i64;
typedef long double ld;

int main() {
  i64 n0;
  cin >> n0;
  for (i64 i = 0; i < n0; i++) {
    i64 n;
    cin >> n;
    i64 grades[n], sum = 0;
    for (i64 i = 0; i < n; i++) {
      cin >> grades[i];
      sum += grades[i];
    }
    ld avg = sum / n;

    i64 count = 0;
    for (i64 i = 0; i < n; i++) {
      if (grades[i] > avg) {
        count++;
      }
    }

    cout << fixed;
    cout.precision(3);
    cout << (count / (ld)n) * 100 << "%" << endl;
  }
  return 0;
}