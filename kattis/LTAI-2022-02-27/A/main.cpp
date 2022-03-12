#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n = 0;
    cin >> n;
    vector<i64> v(n);
    for (i64 i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());

    i64 a = 0, b = 0;
    bool abvar = true;
    for(i64 i = n - 1; i >= 0; i--) {
        if(abvar) {
            a += v[i];
            abvar = !abvar;
        } else {
            b += v[i];
            abvar = !abvar;
        }
    }

    cout << a << " " << b << endl;
    return 0;
}