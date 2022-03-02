#include <iostream>
#include <cmath>

using namespace std;

typedef int64_t i64;

int main() {
    i64 n = 0, greater = 0, res;
    cin >> n;
    for(i64 i = sqrt(n) + 1; i > 1; i--) {
        i64 a = n, revnum = 1, num = 0, s = 0;
        while(a) {
            revnum *= 10;
            revnum += a % i;
            a /= i;
        }
        while(revnum > 1) {
            num *= 10;
            num += revnum % 10;
            revnum /= 10;
        }

        while (num % 10 == 0) {
            s++;
            num /= 10;
        }

        if (s >= greater) {
            greater = s;
            res = i;
        }
        //cout << i << " " << num << " " << s << endl;
    }
    cout << res << endl;
    return 0;
} // Time Limit Exceeded