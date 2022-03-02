#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    vector<i64> days;
    cin >> n;
    for (i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;
        days.push_back(x);
    }

    i64 lowest = 999999999;
    i64 res = 0;
    for(i64 i = 0; i < days.size(); i++) {
        if(days[i] < lowest) {
            lowest = days[i];
            res = i;
        }
    }

    cout << res << endl;
    return 0;
}