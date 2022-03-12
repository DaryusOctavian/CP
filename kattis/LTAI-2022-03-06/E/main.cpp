#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    vector<i64> v(n);

    for(i64 i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    for(i64 i = 0; i < n / 2; i++) {
        swap(v[i], v[n - i - 1]);
    }

    i64 res = n;
    for(i64 i = 0; i < n - 1; i++) {
        res = min(res, (i + 1 + v[i + 1]));
    }

    cout << res << endl;
    return 0;
}