#include <iostream>

using namespace ::std;

int main() {
  int pos, n;
  cin >> pos >> n;
  for (int i = 0, currTime = 0; i < n; i++) {
    int time;
    char value;
    cin >> time >> value;
    currTime += time;
    if (value == 'T' && !(currTime > 210)) {
      pos++;
      if (pos > 8) {
        pos -= 8;
      }
    }
  }
  cout << pos << endl;
  return 0;
}
