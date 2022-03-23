#include <iostream>

using namespace ::std;

int main() {
  int n, win = 0;
  cin >> n;
  int roll[n];
  bool yes = false;
  int timesFound;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    roll[i] = a;
  }
  int j = 6;
  while (j > 0) {
    timesFound = 0;
    for (int i = 0; i < n; i++) {
      if (roll[i] == j) {
        timesFound++;
        win = i + 1;
      }
    }
    if (timesFound == 1) {
      yes = true;
      break;
    }
    j--;
  }
  if (yes) {
    cout << win << endl;
  } else {
    cout << "none" << endl;
  }
  return 0;
}
