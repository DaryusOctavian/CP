#include <bits/stdc++.h>

using namespace std;

int main() {
  ifstream cin("input.txt");
  ofstream cout("output.txt");
  string s, t;
  while (getline(cin, s)) {
    if (!(s.substr(0, 7) == ".......")) {
      if (!t.empty()) {
        t += " ";
      }
      t += s;
    } else {
      break;
    }
  }

  cout << t << endl;

  return 0;
}