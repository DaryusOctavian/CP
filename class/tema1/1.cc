#include <iostream>
#include <string.h>

using namespace std;

struct concurs {
  char nume_concurent[25], proba[50];
  int punctaj;
} c[200];

char p[50];

int main() {
  cin >> p;
  int n = 0;
  while (!cin.eof()) {
    cin >> c[n].nume_concurent >> c[n].proba >> c[n].punctaj;
    n++;
  }
  for (int i = 0; i < n; i++) {
    if (strcmp(c[i].proba, p) == 0 && c[i].punctaj == 100) {
      cout << c[i].nume_concurent << endl;
    }
  }

  return 0;
}