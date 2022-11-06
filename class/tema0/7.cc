#include <iostream>
#include <string.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  cin.get();
  char a[256], x[256], y[256];
  for (auto &e : x) {
    e = 'z';
  }
  for (auto &e : y) {
    e = 'z';
  }

  x[255] = '\0';
  y[255] = '\0';
  while (tc--) {
    cin.getline(a, 256);
    if (strcmp(a, x) < 0) {
      strcpy(x, a);
    } else if (strcmp(a, y) < 0) {
      strcpy(y, a);
    }
  }

  cout << strcat(x, y) << endl;

  return 0;
}