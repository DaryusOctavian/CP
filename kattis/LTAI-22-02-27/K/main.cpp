#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    vector<i64> nums(n);
    for(i64 i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());

    i64 res = 0;
    for(i64 i = 0; i < n; i++) {
        if(nums[i] <= n - i) {
            res = max(res, nums[i]);
        } else {
            res = max(res, min(nums[i], n - i));
        }
    }

    cout << res << endl;
    return 0;
}