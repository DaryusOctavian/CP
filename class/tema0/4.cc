#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char a[256];
  cin.getline(a, 256);
  for (int i = 0; i < strlen(a); i++) {
    if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' ||
        a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' ||
        a[i] == 'O' || a[i] == 'U') {
      a[i] = tolower(a[i]);
    } else {
      a[i] = toupper(a[i]);
    }
  }
  cout << a << endl;

  for (int i = 0; i < strlen(a); i++) {
    a[i] = tolower(a[i]);
  }
  char *eep = strtok(a, " ");
  while (eep != NULL) {
    eep[0] = toupper(eep[0]);
    cout << eep << " ";
    eep = strtok(NULL, " ");
  }
  cout << endl;

  return 0;
}