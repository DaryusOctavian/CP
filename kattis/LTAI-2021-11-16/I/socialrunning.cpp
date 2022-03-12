#include <iostream>

using namespace ::std;

int main() {
  int n, x = 99999, l;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++) {
    l = i - 2;
    if (l < 0) {
      l += n;
    }
    if ((arr[i] + arr[l]) < x) {
      x = arr[i] + arr[l];
    }
  }
  cout << x << endl;
  return 0;
}
