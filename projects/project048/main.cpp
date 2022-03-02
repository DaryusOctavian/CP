#include <iostream>
#include <fstream>

using namespace std;

typedef int64_t i64;

// ifstream fin("input.txt");

int main() {
    i64 a;
    cin >> a;
    for(i64 k = 0; k < a; k++) {
        i64 b;
        cin >> b;
        i64 inv[b];
        for(i64 i = 0; i < b; i++) {
            cin >> inv[i];
        }

        i64 res, timesFound;
        for(i64 i = 0; i < b; i++) {
            timesFound = 0;
            for(i64 j = 0; j < b; j++) {
                if(inv[j] == inv[i]) {
                    timesFound++;
                }
            }

            if(timesFound != 2) {
                res = inv[i];
                break;
            }
        }

        cout << "Case #" << k + 1 << ": " << res << endl;
    }
    return 0;
}