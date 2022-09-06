#include <iostream>

using namespace ::std;

int main() {
  int ans, a, b, c, d;
  cin >> a >> b >> c >> d;
  while (a != 0 || b != 0 || c != 0 || d != 0) {
    ans = 1080;
    ans += ((a - b + 40) % 40) * 9;
    ans += ((c - b + 40) % 40) * 9;
    ans += ((c - d + 40) % 40) * 9;

    cout << ans << endl;
    cin >> a >> b >> c >> d;
  }
  return 0;
}
