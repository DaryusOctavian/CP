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

    i64 counter = 0, s = 0;
    for(i64 i = n - 1; i >= 0; i--) {
        if(counter % 3 == 0 || counter % 3 == 1) {
            s += v[i];
        } counter++;
    }

    cout << s << endl;
    return 0;
}