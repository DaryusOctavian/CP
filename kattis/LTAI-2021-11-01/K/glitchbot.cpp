#include <iostream>

using namespace ::std;

int checkerx(string directions[], int n) {
  int dir = 0;
  int x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    if (directions[i] == "Right") {
      dir++;
    }
    if (directions[i] == "Left") {
      dir--;
    }

    if (dir == 4) {
      dir = 0;
    }
    if (dir == -1) {
      dir = 3;
    }

    if (directions[i] == "Forward") {
      if (dir == 0) {
        y++;
      } else if (dir == 1) {
        x++;
      } else if (dir == 2) {
        y--;
      } else {
        x--;
      }
    }
  }

  return x;
}

int checkery(string directions[], int n) {
  int dir = 0;
  int x = 0, y = 0;
  for (int i = 0; i < n; i++) {
    if (directions[i] == "Right") {
      dir++;
    }
    if (directions[i] == "Left") {
      dir--;
    }

    if (dir == 4) {
      dir = 0;
    }
    if (dir == -1) {
      dir = 3;
    }

    if (directions[i] == "Forward") {
      if (dir == 0) {
        y++;
      } else if (dir == 1) {
        x++;
      } else if (dir == 2) {
        y--;
      } else {
        x--;
      }
    }
  }

  return y;
}

int main() {
  int finX, finY, n, j = 0, corrLine = 0;
  string corrValue;
  cin >> finX >> finY >> n;
  string steps[n];
  for (int i = 0; i < n; i++) {
    cin >> steps[i];
  }

  bool found = false;

  while (!found) {
    string originalValue = steps[j];
    steps[j] = "Forward";
    if (checkerx(steps, n) == finX && checkery(steps, n) == finY) {
      corrLine = j + 1;
      corrValue = "Forward";
      found = true;
    }

    steps[j] = "Left";
    if (checkerx(steps, n) == finX && checkery(steps, n) == finY) {
      corrLine = j + 1;
      corrValue = "Left";
      found = true;
    }

    steps[j] = "Right";
    if (checkerx(steps, n) == finX && checkery(steps, n) == finY) {
      corrLine = j + 1;
      corrValue = "Right";
      found = true;
    }

    steps[j] = originalValue;
    j++;
  }

  cout << corrLine << " " << corrValue << endl;
  return 0;
}
