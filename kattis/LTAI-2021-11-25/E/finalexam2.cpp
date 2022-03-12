#include <iostream>

using namespace ::std;

typedef long long ll;

int main() {
  int n, s = 0;
  char a, pastA = 'Z';
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    if (a == pastA) {
      s++;
    }
    pastA = a;
  }
  cout << s << endl;
  return 0;
}
