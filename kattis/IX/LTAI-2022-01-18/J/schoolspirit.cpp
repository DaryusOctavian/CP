#include <iostream>
#include <math.h>

using namespace std;

typedef int64_t i64;
typedef long double ld;

int main() {
  i64 n, numerator = 1, denominator = 1;
  ld total = 0, sum = 0;
  cin >> n;
  i64 x[n];
  for (i64 i = 0; i < n; i++) {
    cin >> x[i];

    total += x[i] * pow(4 / 5.0, i);
    // numerator *= 4;
    // denominator *= 5;
  }
  total /= 5.0;
  ld finTotal = total;

  for (i64 j = 0; j < n; j++) {
    total = 0;
    i64 yes = 0;
    numerator = 1;
    denominator = 1;
    for (i64 i = 0; i < n; i++) {
      if (i != j) {
        total += x[i] * pow(4 / 5.0, yes);
        // numerator *= 4;
        // denominator *= 5;
        yes++;
      }
    }
    total /= 5.0;
    sum += total;
  }

  cout << fixed;
  cout.precision(10);
  cout << finTotal << endl;
  cout << fixed;
  cout.precision(10);
  cout << sum / n << endl;
  return 0;
}