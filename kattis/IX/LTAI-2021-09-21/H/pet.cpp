#include <iostream>

using namespace ::std;

int main() {
  int winner = 0, points = 0, a, b, c, d;
  for (int i = 1; i <= 5; i++) {
    cin >> a >> b >> c >> d;
    if ((a + b + c + d) > points) {
      winner = i;
      points = a + b + c + d;
    }
  }
  cout << winner << " " << points << endl;
  return 0;
}