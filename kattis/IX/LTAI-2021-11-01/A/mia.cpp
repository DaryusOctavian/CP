#include <cmath>
#include <iostream>

using namespace ::std;

int main() {
  int a1 = 1, b1 = 1, a2 = 1, b2 = 1, p1Lvl = 0, p2Lvl = 0;
  while (a1 != 0 || b1 != 0 || a2 != 0 || b2 != 0) {
    cin >> a1 >> b1 >> a2 >> b2;
    int g1 = max(a1, b1);
    int g2 = max(a2, b2);
    int l1 = min(a1, b1);
    int l2 = min(a2, b2);
    if ((a1 == 1 && b1 == 2) || (a1 == 2 && b1 == 1)) {
      p1Lvl = 3;
    } else if (a1 == b1) {
      p1Lvl = 2;
    } else {
      p1Lvl = 1;
    }
    if ((a2 == 1 && b2 == 2) || (a2 == 2 && b2 == 1)) {
      p2Lvl = 3;
    } else if (a2 == b2) {
      p2Lvl = 2;
    } else {
      p2Lvl = 1;
    }

    if (a1 == 0 && b1 == 0 && a2 == 0 && b2 == 0) {
      cout << endl;
    } else if (p1Lvl == p2Lvl) {
      if (p1Lvl == 3) {
        cout << "Tie.\n";
      } else if (p1Lvl == 2) {
        if (g1 > g2) {
          cout << "Player 1 wins.\n";
        } else if (g1 < g2) {
          cout << "Player 2 wins.\n";
        } else {
          cout << "Tie.\n";
        }
      } else {
        if (g1 > g2) {
          cout << "Player 1 wins.\n";
        } else if (g1 < g2) {
          cout << "Player 2 wins.\n";
        } else {
          if (l1 > l2) {
            cout << "Player 1 wins.\n";
          } else if (l1 < l2) {
            cout << "Player 2 wins.\n";
          } else {
            cout << "Tie.\n";
          }
        }
      }
    } else if (p1Lvl > p2Lvl) {
      cout << "Player 1 wins.\n";
    } else {
      cout << "Player 2 wins.\n";
    }
  }
  return 0;
}