#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 facts[1000001];
    i64 x = 1;
    for(i64 i = 1; i < 1000000; i++) {
        x *= i;
        while(x % 10 == 0) x /= 10;
        facts[i] = x % 10;
        x %= 1000000;
    }

    i64 n;
    cin >> n;
    while(n != 0) {
        cout << facts[n] << endl;
        cin >> n;
    }
    return 0;
}