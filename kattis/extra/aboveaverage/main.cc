#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;
typedef long double ld;

int main() {
    i64 cases;
    cin >> cases;
    for (i64 k = 0; k < cases; k++) {
        i64 n;
        cin >> n;
        i64 nums[n], sum = 0;
        for (i64 i = 0; i < n; i++) {
            cin >> nums[i];
            sum += nums[i];
        }
        ld avg = (ld)sum / (ld)n;
        i64 aboveAverage = 0;
        for (i64 i = 0; i < n; i++) {
            if (nums[i] > avg) {
                aboveAverage++;
            }
        }

        ld res = (ld)aboveAverage / (ld)n * 100;
        cout << fixed;
        cout.precision(3);
        cout << res << '%' << endl;
    }
    return 0;
}
/*

*/