#include <iostream>
#include <string.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  cin.get();
  char a[256], x[256], y[256];
  x[0] = '\0';
  y[0] = '\0';
  while (tc--) {
    cin.getline(a, 256);
    if (strlen(a) > strlen(x)) {
      strcpy(x, a);
    } else if (strlen(a) > strlen(y)) {
      strcpy(y, a);
    }
  }

  cout << strcat(x, y) << endl;

  return 0;
}