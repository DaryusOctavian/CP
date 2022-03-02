#include <iostream>

using namespace std;

typedef int64_t i64;

void printer(i64 a, i64 b, i64 x) {
    cout << x << " = ";
    for (i64 i = a; i < b; i++) {
        cout << i << " + ";
    }
    cout << b << endl;
}

int main() {
    i64 k;
    cin >> k;
    for (i64 k1 = 0; k1 < k; k1++) {
        i64 n;
        bool found = false;
        cin >> n;
        i64 start = 1, sum = 0;
        i64 temp = start;
        i64 end;
        while(sum < n) {
            sum += temp;
            end = temp;
            temp++;
        }

        if (sum == n) {
            found = true;
        }

        for(i64 i = 2; i <= n && !found; i++) {
            sum = 0;
            start = i;
            temp = start;
            while(sum < n) {
                sum += temp;
                end = temp;
                temp++;
            }

            if (sum == n) {
                found = true;
                break;
            }
            
        }

        if(!(start == end)) {
            printer(start, end, n);
        } else {
            cout << "IMPOSSIBLE" << endl;
        }
    }
    return 0;
}