#include <iostream>
#include <fstream>

using namespace::std;

typedef int64_t i64;

ifstream fin("input.txt");

int main() {
    i64 a = 1, b = 1, c = 1;
    i64 n;
    cin >> n;
    cout << 1 << endl << 1 << endl;
    for (i64 i = 2; i < n; i++) {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }
    

    return 0;
}