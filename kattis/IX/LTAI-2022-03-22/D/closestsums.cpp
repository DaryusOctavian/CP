#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
  i64 n, m;
  vector<i64> nums, checks, sums;
  while (cin >> n) {
    nums.resize(n);
    for (i64 i = 0; i < n; i++) {
      cin >> nums[i];
    }
    cin >> m;
    checks.resize(m);
    for (i64 i = 0; i < m; i++) {
      cin >> checks[i];
    }

    sums.resize(0);
    for (i64 i = 0; i < n; i++) {
      for (i64 j = i + 1; j < n; j++) {
        sums.push_back(nums[i] + nums[j]);
      }
    }
  }
  return 0;
}