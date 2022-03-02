#include <iostream>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n;
    cin >> n;
    while(n > 0) {
        i64 res;

        if(n < 7) {
            if (n == 3) {
                cout << 4 << endl;
            } else {
                cout << "No such base" << endl;
            }
            
            cin >> n;
            continue;
        }

        for(i64 i = 4; i <= n; i++) {
            if(n % i == 3) {
                res = i;
                break;
            }
        }

        cout << res << endl;
        cin >> n;
    }
    return 0;
}