#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n;
  cin >> n;
  i64 nums[n];
  for (i64 i = 0; i < n; i++) {
    cin >> nums[i];
  }

  for (i64 i = n - 1; i >= 0; i--) {
    cout << nums[i] << endl;
  }
  return 0;
}