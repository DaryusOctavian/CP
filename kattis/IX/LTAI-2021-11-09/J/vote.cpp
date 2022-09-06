
#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  ll iFin, jFin;
  ll sum, val, winPos, Win, Winners;
  cin >> iFin;
  for (ll i = 0; i < iFin; i++) {
    cin >> jFin;
    sum = 0;
    Win = 0;
    winPos = 0;
    for (ll j = 0; j < jFin; j++) {
      cin >> val;
      if (val > Win) {
        Win = val;
        winPos = j + 1;
        Winners = 1;
      } else if (val == Win) {
        Winners++;
      }
      sum += val;
    }
    if (Winners > 1) {
      cout << "no winner" << endl;
    } else if (sum / 2 < Win) {
      cout << "majority winner " << winPos << endl;
    } else {
      cout << "minority winner " << winPos << endl;
    }
  }
  return 0;
}
