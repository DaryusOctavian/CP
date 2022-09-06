#include <cmath>
#include <iostream>

using namespace ::std;
typedef long long ll;

int main() {
  double n;
  cin >> n;
  ll res = round((n * 5280000) / 4854.0);
  cout << res << endl;
  return 0;
}
