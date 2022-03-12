#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 l = 1, r = 1000;
    while(l <= r) {
        i64 mid = l + (r - l) / 2;
        cout << mid << endl;
        string reply;
        cin >> reply;
        if(reply == "lower") {
            r = mid - 1;
        } else if(reply == "higher") {
            l = mid + 1;
        } else {
            return 0;
        }
    }
    return 0;
}