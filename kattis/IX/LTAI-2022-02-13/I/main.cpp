#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 l = 1, r = 1000;
    bool found = false;
    do {
        i64 n = l - (l - r) / 2;
        cout << n << endl;
        string ans;
        cin >> ans;
        if(ans == "lower") {
            r = n - 1;
        } else if(ans == "higher") {
            l = n + 1;
        } else {
            break;
        }
    } while(l <= r);
    return 0;
}