#include <iostream>
#include <vector>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    vector<bool> days(365);
    cin >> n;
    for(i64 i = 0; i < days.size(); i++) {
        days[i] = false;
    }

    for(i64 i = 0; i < n; i++) {
        i64 a, b;
        cin >> a >> b;
        for(i64 j = a - 1; j < b; j++) {
            days[j] = true;
        }
    }

    i64 sum = 0;
    for(i64 i = 0; i < days.size(); i++) {
        if(days[i] == true) {
            sum++;
        }
    }

    cout << sum << endl;
    return 0;
}