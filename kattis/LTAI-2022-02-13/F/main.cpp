#include <iostream>
#include <cmath>
using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    for (i64 i = 0; i < n; i++) {
        i64 x;
        cin >> x;
        cout << (i64)pow(2, x) - 1 << endl;
    }
    return 0;
}