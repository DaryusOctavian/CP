#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    vector<i64> values(n);
    for(i64 i = 0; i < n; i++) {
        cin >> values[i];
    }

    sort(values.begin(), values.end());

    i64 coclender = 0, res = 0;
    for(i64 i = n - 1; i >= 0; i--) {
        if(coclender % 3 == 0) {
            res += values[i];
        } else if(coclender % 3 == 1) {
            res += values[i];
        }
        coclender++;
    }

    cout << res << endl;
    return 0;
}