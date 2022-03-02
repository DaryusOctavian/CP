#include <bits/stdc++.h>

using namespace std;

typedef int64_t i64;

int main() {
    i64 ee;
    cin >> ee;
    for(i64 k = 0; k < ee; k++) {
        i64 L1, A1, L2, A2, LT, AT;
        cin >> L1 >> A1 >> L2 >> A2 >> LT >> AT;
        i64 solved = 0;
        i64 ones = 0;
        i64 twos = 0;
        for(i64 i = 1; i <= LT / L1 && solved < 2; i++) {
            if((LT - (i * L1)) % L2 == 0) {
                i64 robot2s = (LT - (i * L1)) / L2;
                if(AT - i * A1 - robot2s * A2 == 0 && robot2s >= 1) {
                    ones = i;
                    twos = robot2s;
                    solved++;
                }
            }
        }
        if(solved != 1) {
            cout << "?" << endl;
        }
        else {
            cout << ones << " " << twos << endl;
        }
    }

    return 0;
}