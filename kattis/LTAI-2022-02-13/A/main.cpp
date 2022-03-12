#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    i64 prev;
    cin >> prev;
    bool on = true;
    i64 sum = 0;
    for(i64 i = 1; i < n; i++) {
        i64 x;
        cin >> x;
        if(on) {
            sum += x - prev;
        }

        on = !on;
        prev = x;
    }

    if(n % 2) {
        cout << "still running" << endl;
    } else {
        cout << sum << endl;
    }
    return 0;
}