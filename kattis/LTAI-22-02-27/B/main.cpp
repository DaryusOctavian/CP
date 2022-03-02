#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 a, b;
    cin >> a >> b;
    vector<i64> v(a + b, 0);
    for(i64 i = 1; i <= a; i++) {
        for(i64 j = 1; j <= b; j++) {
            v[i + j - 1]++;
        }
    }

    vector<i64> ans;
    i64 lsofar = 0;
    for(i64 i = 0; i < v.size(); i++) {
        if(v[i] > lsofar) {
            ans.resize(1, 0);
            ans[0] = i + 1;
            lsofar = v[i];
        } else if(v[i] == lsofar) {
            ans.push_back(i + 1);
        }
    }

    for(auto x: ans) {
        cout << x << endl;
    }
    return 0;
}