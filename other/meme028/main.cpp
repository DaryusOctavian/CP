#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  string s;
  getline(cin, s);
  i64 vowels = 0;
  for (char c : s) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
      vowels++;
    }
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
      vowels++;
    }
  }

  cout << vowels << endl;

  return 0;
}