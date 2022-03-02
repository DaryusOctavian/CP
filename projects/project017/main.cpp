#include <iostream>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    for(i64 i = 0; i < n; i++) {
        i64 m, a;
        i64 lastmult = 0;
        cin >> m;
        i64 mult[32000];
        for(i64 i = 0; i < 32000; i++) {
            mult[i] = 0;
        }
        i64 res = 1;
        for(i64 j = 0; j < m; j++) {
            cin >> a;
            i64 count = 0;
            while(a % 2 == 0) {
                count++;
                a /= 2;
            }
            if(count > mult[2]) {
                mult[2] = count;
            }
            for(i64 k = 3; k * k <= a; k += 2) {
                count = 0;
                while(a % k == 0) {
                    count++;
                    a /= k;
                    lastmult = k;
                }
                if(count > mult[k]) {
                    mult[k] = count;
                }
            }
            if(lastmult == mult[a]) {
                mult[a]++;
            } else {
                res *= a;
                mult[a]--;
            }
        }

        for(i64 j = 0; j < 32000; j++) {
            if(mult[j] > 0) {
                res *= pow(j, mult[j]);
            }
        }
        cout << res << endl;
    }
    return 0;
}
/* 
10 = 2 * 5
6 = 2 * 3
15 = 3 * 5
*/