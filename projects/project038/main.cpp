#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n, num = 0;
    bool found = false;
    cin >> n;
    for (i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;
        while(num < x - 1) {
            num++;
            cout << num << endl;
            found = true;
        }
        num = x;
    }

    if(!found) {
        cout << "good job" << endl;
    }
    return 0;
}