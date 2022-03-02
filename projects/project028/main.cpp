#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    i64 rev = 0;
    while (n > 0) {
        rev *= 2;
        rev += n % 2;
        n /= 2;
    }

    cout << rev << endl;
    return 0;
}