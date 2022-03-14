#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

vector<i64> memo(10000, 0);

i64 fibb(i64 n) {
  if (n == 1) {
    memo[1] = 1;
    return 1;
  }
  if (n == 2) {
    memo[2] = 1;
    return 1;
  }

  if (memo[n]) {
    return memo[n];
  } else {
    i64 x = fibb(n - 1) + fibb(n - 2);
    memo[n] = x;
    return x;
  }
}

int main() {
  i64 n;
  cin >> n;
  cout << fibb(n) << endl;
  return 0;
}

// 1 1 2 3 5 8 13 21
