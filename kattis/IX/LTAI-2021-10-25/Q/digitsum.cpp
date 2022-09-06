#include <iostream>

using namespace ::std;

int sum(int n) {
  int s = 0;
  while (n > 0) {
    s += n % 10;
    n /= 10;
  }
  return s;
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int a, b, s = 0;
    cin >> a >> b;
    while (b >= a) {
      s += sum(b);
      b--;
    }
    cout << s << endl;
  }
  return 0;
}
// tles because of straightforward method