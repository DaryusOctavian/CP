#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, m;
  cin >> n >> m;
  i64 nums[n][m];
  for (i64 i = 0; i < n; i++) {
    for (i64 j = 0; j < m; j++) {
      cin >> nums[i][j];
    }
  }

  for (i64 i = 1; i < n; i++) {
    nums[i][0] += nums[i - 1][0];
  }
  for (i64 i = 1; i < m; i++) {
    nums[0][i] += nums[0][i - 1];
  }

  for (i64 i = 1; i < n; i++) {
    for (i64 j = 1; j < m; j++) {
      nums[i][j] += max(nums[i][j - 1], nums[i - 1][j]);
    }
  }

  for (i64 i = 0; i < n; i++) {
    cout << nums[i][m - 1] << " ";
  }
  cout << endl;
  return 0;
}