#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    i64 a;
    cin >> a;
    for(i64 i = 1; i < n; i++) {
        i64 x;
        cin >> x;
        if(x % a == 0) {
            cout << x << endl;
            i++;
            cin >> a;
        }
    }
    return 0;
}