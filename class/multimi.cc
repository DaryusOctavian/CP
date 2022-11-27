#include <iostream>

using namespace std;

bool ap(int x, int v[], int n) {
  for (int i = 0; i < n; i++) {
    if (x == v[i]) {
      return true;
    }
  }

  return false;
}

void citire(int v[], int n) {
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
}

void reuniune(int a[], int n, int b[], int m) {
  cout << "Reuniune:\n";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  for (int i = 0; i < m; i++) {
    if (!ap(b[i], a, n)) {
      cout << b[i] << " ";
    }
  }
  cout << endl;
}

void intersectie(int a[], int n, int b[], int m) {
  cout << "Intersectie:\n";
  for (int i = 0; i < n; i++) {
    if (ap(a[i], b, m)) {
      cout << a[i] << " ";
    }
  }
  cout << endl;
}

void diferenta(int a[], int n, int b[], int m) {
  cout << "Diferenta:\n";
  for (int i = 0; i < n; i++) {
    if (!ap(a[i], b, m)) {
      cout << a[i] << " ";
    }
  }
  cout << endl;
}

int main() {
  int n, m;
  cin >> n >> m;
  int a[n], b[m];

  citire(a, n);
  citire(b, m);

  reuniune(a, n, b, m);
  intersectie(a, n, b, m);
  diferenta(a, n, b, m);
  diferenta(b, m, a, n);

  return 0;
}