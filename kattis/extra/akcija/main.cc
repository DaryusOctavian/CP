#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    vector<i64> v(n);
    for (i64 i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end(), greater<i64>());

    i64 s = 0;
    for (i64 i = 0; i < n; i++) {
        if (i % 3 == 2) {
            continue;
        } else {
            s += v[i];
        }
    }

    cout << s << endl;
    return 0;
}
