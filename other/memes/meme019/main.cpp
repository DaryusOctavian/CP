#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  ifstream cin{"input.txt"};
  ofstream cout{"main.out"};

  i64 n, m, k;
  cin >> n >> m >> k;

  while (m != 0) {
    i64 r = n % m;
    n = m;
    m = r;
  }

  i64 gcd = n;
  while (gcd < pow(10, k)) {
    gcd += n;
  }

  while (gcd < pow(10, k + 1)) {
    cout << gcd << endl;
    gcd += n;
  }

  return 0;
}