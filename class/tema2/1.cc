#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char a[256];
  cin.getline(a, 256);
  char x, slb[256];
  cin >> x >> slb;
  int64_t ans1 = 0, ans2 = 0, ans3 = 0;
  for (int i = 0; i <= strlen(a); i++) {
    if (a[i] == x) {
      ans1++;
    }
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' ||
        a[i] == 'u') {
      ans2++;
    }
    if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' ||
        a[i] == 'U') {
      ans2++;
    }
  }
  for (int i = 0; i + strlen(slb) <= strlen(a); i++) {
    bool ok = true;
    for (int j = 0; j < strlen(slb); j++) {
      if (slb[j] != a[i + j]) {
        ok = false;
      }
    }
    if (ok) {
      ans3++;
    }
  }

  cout << "a) " << ans1 << endl;
  cout << "b) " << ans2 << endl;
  cout << "c) " << ans3 << endl;
  return 0;
}