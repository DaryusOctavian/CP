#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, k, sum = 0, evenSum = 0;
  cin >> n >> k;
  vector<i64> a(n);
  for (i64 i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    if (a[i] % 2 == 0) {
      evenSum += a[i];
    }
  }

  if (k == 1) {
    cout << 7 << endl;
    return 0;
  } else if (k == 2) {
    if (a[0] > a[1]) {
      cout << "Bigger" << endl;
    } else if (a[0] < a[1]) {
      cout << "Smaller" << endl;
    } else {
      cout << "Equal" << endl;
    }
    return 0;
  } else if (k == 3) {
    i64 ans;
    ans = (a[0] + a[1] + a[2]) - max(max(a[0], a[1]), a[2]) -
          min(min(a[0], a[1]), a[2]);
    cout << ans << endl;
    return 0;
  } else if (k == 4) {
    cout << sum << endl;
    return 0;
  } else if (k == 5) {
    cout << evenSum << endl;
    return 0;
  } else if (k == 6) {
    for (i64 i = 0; i < n; i++) {
      a[i] %= 26;
      cout << (char)(a[i] + 'a');
    }
    return 0;
  } else if (k == 7) {
    i64 i = 0, counter = 0;
    while (true) {
      i = a[i];
      if (i < 0 || i >= n) {
        cout << "Out" << endl;
        return 0;
      }
      if (counter > 1e7) {
        cout << "Cyclic" << endl;
        return 0;
      }

      if (i == n - 1) {
        cout << "Done" << endl;
        return 0;
      }

      counter++;
    }
  }

  return 0;
}