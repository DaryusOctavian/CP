#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

typedef int64_t i64;

// ifstream cin("input.txt");
// ofstream cout("output.txt");

int main() {
    i64 n, q;
    cin >> n >> q;
    i64 locs[n];
    for(i64 i = 0; i < n; i++) {
        cin >> locs[i];
    }
    for(i64 i = 0; i < q; i++) {
        i64 a, b, c;
        cin >> a >> b >> c;
        if(a == 1) {
            locs[b - 1] = c;
        } else {
            cout << abs(locs[b - 1] - locs[c - 1]) << endl;
        }
    }
    return 0;
}