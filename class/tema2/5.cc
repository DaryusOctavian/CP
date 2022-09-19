#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char s[256];
  cin >> s;
  bool ok = true;
  for (int i = 0; i < strlen(s) / 2; i++) {
    if (s[i] != s[strlen(s) - i - 1]) {
      ok = false;
    }
  }
  if (ok) {
    cout << "Palindrom" << endl;
  } else {
    cout << "Nu" << endl;
  }

  return 0;
}
