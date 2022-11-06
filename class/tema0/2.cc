#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char a[256], x;
  cin >> a;
  x = a[0];
  for (int i = 1; i < strlen(a); i++) {
    if (a[i] != x) {
      cout << a[i];
    }
  }
  cout << endl;
  return 0;
}