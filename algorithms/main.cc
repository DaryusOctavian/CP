#include <algorithm>
#include <iostream>

#include "./sort.hpp"

using namespace std;

int main() {
  int n;
  cin >> n;
  int v[n];
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  sort(v, v + n);

  for (int i = 0; i < n; i++) {
    cout << v[i] << " ";
  }
  cout << endl;
}