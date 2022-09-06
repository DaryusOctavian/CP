#include <iostream>
using namespace ::std;

int main() {
  int n, v, s = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> v;
    if (v < 0) {
      s += v * -1;
    }
  }
  cout << s << endl;
  return 0;
}
