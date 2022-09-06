#include <iostream>
using namespace std;

int main() {
  int n, h, v;
  cin >> n >> h >> v;
  if (h * 2 >= n && v * 2 >= n) {
    cout << h * v * 4;
  }
  if (h * 2 >= n && v * 2 < n) {
    cout << h * (n - v) * 4;
  }
  if (h * 2 < n && v * 2 < n) {
    cout << (n - h) * (n - v) * 4;
  }
  if (h * 2 < n && v * 2 >= n) {
    cout << (n - h) * v * 4;
  }
  return 0;
}
