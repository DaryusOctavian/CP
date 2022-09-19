#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char a[256];
  cin >> a;
  for (int i = 1; i < strlen(a) / 2; i++) {
    for (int j = i; j < strlen(a) - i; j++) {
      cout << a[j];
    }
    cout << endl;
  }

  return 0;
}