#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    i64 nums[n];
    for(i64 i = 0; i < n; i++) {
        cin >> nums[i];
    }

    i64 res = 0, m = n + 1;
    i64 shots[m];
    for(i64 i = 0; i < m; i++) {
        shots[i] = 0;
    }

    for(i64 i = 0; i < n; i++) {
        i64 x = nums[i] - 1;

        if(shots[x + 1] != 0) {
            shots[x + 1]--;
        }
        shots[x]++;
    }

    for(i64 i = 0; i < m; i++) {
        res += shots[i];
    }
    cout << res << endl;
    return 0;
}