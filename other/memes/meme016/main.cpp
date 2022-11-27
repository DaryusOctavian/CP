#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  string s;
  i64 n;
  cin >> s >> n;
  if (s == "OCT" && n == 31 || s == "DEC" && n == 25) {
    cout << "yup" << endl;
  } else {
    cout << "nope" << endl;
  }
  return 0;
}