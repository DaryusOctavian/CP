#include <iostream>

using namespace::std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < b; i++) {
        c += a;
    }
    cout << a << b << c;
    return 0;
}